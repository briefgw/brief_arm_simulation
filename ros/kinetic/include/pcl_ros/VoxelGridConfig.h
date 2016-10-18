//#line 2 "/opt/ros/kinetic/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"
// *********************************************************
// 
// File autogenerated for the pcl_ros package 
// by the dynamic_reconfigure package.
// Please do not edit.
// 
// ********************************************************/

#ifndef __pcl_ros__VOXELGRIDCONFIG_H__
#define __pcl_ros__VOXELGRIDCONFIG_H__

#include <dynamic_reconfigure/config_tools.h>
#include <limits>
#include <ros/node_handle.h>
#include <dynamic_reconfigure/ConfigDescription.h>
#include <dynamic_reconfigure/ParamDescription.h>
#include <dynamic_reconfigure/Group.h>
#include <dynamic_reconfigure/config_init_mutex.h>
#include <boost/any.hpp>

namespace pcl_ros
{
  class VoxelGridConfigStatics;
  
  class VoxelGridConfig
  {
  public:
    class AbstractParamDescription : public dynamic_reconfigure::ParamDescription
    {
    public:
      AbstractParamDescription(std::string n, std::string t, uint32_t l, 
          std::string d, std::string e)
      {
        name = n;
        type = t;
        level = l;
        description = d;
        edit_method = e;
      }
      
      virtual void clamp(VoxelGridConfig &config, const VoxelGridConfig &max, const VoxelGridConfig &min) const = 0;
      virtual void calcLevel(uint32_t &level, const VoxelGridConfig &config1, const VoxelGridConfig &config2) const = 0;
      virtual void fromServer(const ros::NodeHandle &nh, VoxelGridConfig &config) const = 0;
      virtual void toServer(const ros::NodeHandle &nh, const VoxelGridConfig &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, VoxelGridConfig &config) const = 0;
      virtual void toMessage(dynamic_reconfigure::Config &msg, const VoxelGridConfig &config) const = 0;
      virtual void getValue(const VoxelGridConfig &config, boost::any &val) const = 0;
    };

    typedef boost::shared_ptr<AbstractParamDescription> AbstractParamDescriptionPtr;
    typedef boost::shared_ptr<const AbstractParamDescription> AbstractParamDescriptionConstPtr;
    
    template <class T>
    class ParamDescription : public AbstractParamDescription
    {
    public:
      ParamDescription(std::string name, std::string type, uint32_t level, 
          std::string description, std::string edit_method, T VoxelGridConfig::* f) :
        AbstractParamDescription(name, type, level, description, edit_method),
        field(f)
      {}

      T (VoxelGridConfig::* field);

      virtual void clamp(VoxelGridConfig &config, const VoxelGridConfig &max, const VoxelGridConfig &min) const
      {
        if (config.*field > max.*field)
          config.*field = max.*field;
        
        if (config.*field < min.*field)
          config.*field = min.*field;
      }

      virtual void calcLevel(uint32_t &comb_level, const VoxelGridConfig &config1, const VoxelGridConfig &config2) const
      {
        if (config1.*field != config2.*field)
          comb_level |= level;
      }

      virtual void fromServer(const ros::NodeHandle &nh, VoxelGridConfig &config) const
      {
        nh.getParam(name, config.*field);
      }

      virtual void toServer(const ros::NodeHandle &nh, const VoxelGridConfig &config) const
      {
        nh.setParam(name, config.*field);
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, VoxelGridConfig &config) const
      {
        return dynamic_reconfigure::ConfigTools::getParameter(msg, name, config.*field);
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const VoxelGridConfig &config) const
      {
        dynamic_reconfigure::ConfigTools::appendParameter(msg, name, config.*field);
      }

      virtual void getValue(const VoxelGridConfig &config, boost::any &val) const
      {
        val = config.*field;
      }
    };

    class AbstractGroupDescription : public dynamic_reconfigure::Group
    {
      public:
      AbstractGroupDescription(std::string n, std::string t, int p, int i, bool s)
      {
        name = n;
        type = t;
        parent = p;
        state = s;
        id = i;
      }

      std::vector<AbstractParamDescriptionConstPtr> abstract_parameters;
      bool state;

      virtual void toMessage(dynamic_reconfigure::Config &msg, const boost::any &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, boost::any &config) const =0;
      virtual void updateParams(boost::any &cfg, VoxelGridConfig &top) const= 0;
      virtual void setInitialState(boost::any &cfg) const = 0;


      void convertParams()
      {
        for(std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = abstract_parameters.begin(); i != abstract_parameters.end(); ++i)
        {
          parameters.push_back(dynamic_reconfigure::ParamDescription(**i));
        }
      }
    };

    typedef boost::shared_ptr<AbstractGroupDescription> AbstractGroupDescriptionPtr;
    typedef boost::shared_ptr<const AbstractGroupDescription> AbstractGroupDescriptionConstPtr;

    template<class T, class PT>
    class GroupDescription : public AbstractGroupDescription
    {
    public:
      GroupDescription(std::string name, std::string type, int parent, int id, bool s, T PT::* f) : AbstractGroupDescription(name, type, parent, id, s), field(f)
      {
      }

      GroupDescription(const GroupDescription<T, PT>& g): AbstractGroupDescription(g.name, g.type, g.parent, g.id, g.state), field(g.field), groups(g.groups)
      {
        parameters = g.parameters;
        abstract_parameters = g.abstract_parameters;
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, boost::any &cfg) const
      {
        PT* config = boost::any_cast<PT*>(cfg);
        if(!dynamic_reconfigure::ConfigTools::getGroupState(msg, name, (*config).*field))
          return false;

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = &((*config).*field);
          if(!(*i)->fromMessage(msg, n))
            return false;
        }

        return true;
      }

      virtual void setInitialState(boost::any &cfg) const
      {
        PT* config = boost::any_cast<PT*>(cfg);
        T* group = &((*config).*field);
        group->state = state;

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = boost::any(&((*config).*field));
          (*i)->setInitialState(n);
        }

      }

      virtual void updateParams(boost::any &cfg, VoxelGridConfig &top) const
      {
        PT* config = boost::any_cast<PT*>(cfg);

        T* f = &((*config).*field);
        f->setParams(top, abstract_parameters);

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = &((*config).*field);
          (*i)->updateParams(n, top);
        }
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const boost::any &cfg) const
      {
        const PT config = boost::any_cast<PT>(cfg);
        dynamic_reconfigure::ConfigTools::appendGroup<T>(msg, name, id, parent, config.*field);

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          (*i)->toMessage(msg, config.*field);
        }
      }

      T (PT::* field);
      std::vector<VoxelGridConfig::AbstractGroupDescriptionConstPtr> groups;
    };
    
class DEFAULT
{
  public:
    DEFAULT()
    {
      state = true;
      name = "Default";
    }

    void setParams(VoxelGridConfig &config, const std::vector<AbstractParamDescriptionConstPtr> params)
    {
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator _i = params.begin(); _i != params.end(); ++_i)
      {
        boost::any val;
        (*_i)->getValue(config, val);

        if("leaf_size"==(*_i)->name){leaf_size = boost::any_cast<double>(val);}
        if("filter_field_name"==(*_i)->name){filter_field_name = boost::any_cast<std::string>(val);}
        if("filter_limit_min"==(*_i)->name){filter_limit_min = boost::any_cast<double>(val);}
        if("filter_limit_max"==(*_i)->name){filter_limit_max = boost::any_cast<double>(val);}
        if("filter_limit_negative"==(*_i)->name){filter_limit_negative = boost::any_cast<bool>(val);}
        if("keep_organized"==(*_i)->name){keep_organized = boost::any_cast<bool>(val);}
        if("input_frame"==(*_i)->name){input_frame = boost::any_cast<std::string>(val);}
        if("output_frame"==(*_i)->name){output_frame = boost::any_cast<std::string>(val);}
      }
    }

    double leaf_size;
std::string filter_field_name;
double filter_limit_min;
double filter_limit_max;
bool filter_limit_negative;
bool keep_organized;
std::string input_frame;
std::string output_frame;

    bool state;
    std::string name;

    
}groups;



//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double leaf_size;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      std::string filter_field_name;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double filter_limit_min;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double filter_limit_max;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      bool filter_limit_negative;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      bool keep_organized;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      std::string input_frame;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      std::string output_frame;
//#line 218 "/opt/ros/kinetic/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"

    bool __fromMessage__(dynamic_reconfigure::Config &msg)
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();

      int count = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        if ((*i)->fromMessage(msg, *this))
          count++;

      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); i ++)
      {
        if ((*i)->id == 0)
        {
          boost::any n = boost::any(this);
          (*i)->updateParams(n, *this);
          (*i)->fromMessage(msg, n);
        }
      }

      if (count != dynamic_reconfigure::ConfigTools::size(msg))
      {
        ROS_ERROR("VoxelGridConfig::__fromMessage__ called with an unexpected parameter.");
        ROS_ERROR("Booleans:");
        for (unsigned int i = 0; i < msg.bools.size(); i++)
          ROS_ERROR("  %s", msg.bools[i].name.c_str());
        ROS_ERROR("Integers:");
        for (unsigned int i = 0; i < msg.ints.size(); i++)
          ROS_ERROR("  %s", msg.ints[i].name.c_str());
        ROS_ERROR("Doubles:");
        for (unsigned int i = 0; i < msg.doubles.size(); i++)
          ROS_ERROR("  %s", msg.doubles[i].name.c_str());
        ROS_ERROR("Strings:");
        for (unsigned int i = 0; i < msg.strs.size(); i++)
          ROS_ERROR("  %s", msg.strs[i].name.c_str());
        // @todo Check that there are no duplicates. Make this error more
        // explicit.
        return false;
      }
      return true;
    }

    // This version of __toMessage__ is used during initialization of
    // statics when __getParamDescriptions__ can't be called yet.
    void __toMessage__(dynamic_reconfigure::Config &msg, const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__, const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__) const
    {
      dynamic_reconfigure::ConfigTools::clear(msg);
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->toMessage(msg, *this);

      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); ++i)
      {
        if((*i)->id == 0)
        {
          (*i)->toMessage(msg, *this);
        }
      }
    }
    
    void __toMessage__(dynamic_reconfigure::Config &msg) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();
      __toMessage__(msg, __param_descriptions__, __group_descriptions__);
    }
    
    void __toServer__(const ros::NodeHandle &nh) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->toServer(nh, *this);
    }

    void __fromServer__(const ros::NodeHandle &nh)
    {
      static bool setup=false;

      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->fromServer(nh, *this);

      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();
      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); i++){
        if (!setup && (*i)->id == 0) {
          setup = true;
          boost::any n = boost::any(this);
          (*i)->setInitialState(n);
        }
      }
    }

    void __clamp__()
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const VoxelGridConfig &__max__ = __getMax__();
      const VoxelGridConfig &__min__ = __getMin__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->clamp(*this, __max__, __min__);
    }

    uint32_t __level__(const VoxelGridConfig &config) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      uint32_t level = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->calcLevel(level, config, *this);
      return level;
    }
    
    static const dynamic_reconfigure::ConfigDescription &__getDescriptionMessage__();
    static const VoxelGridConfig &__getDefault__();
    static const VoxelGridConfig &__getMax__();
    static const VoxelGridConfig &__getMin__();
    static const std::vector<AbstractParamDescriptionConstPtr> &__getParamDescriptions__();
    static const std::vector<AbstractGroupDescriptionConstPtr> &__getGroupDescriptions__();
    
  private:
    static const VoxelGridConfigStatics *__get_statics__();
  };
  
  template <> // Max and min are ignored for strings.
  inline void VoxelGridConfig::ParamDescription<std::string>::clamp(VoxelGridConfig &config, const VoxelGridConfig &max, const VoxelGridConfig &min) const
  {
    return;
  }

  class VoxelGridConfigStatics
  {
    friend class VoxelGridConfig;
    
    VoxelGridConfigStatics()
    {
VoxelGridConfig::GroupDescription<VoxelGridConfig::DEFAULT, VoxelGridConfig> Default("Default", "", 0, 0, true, &VoxelGridConfig::groups);
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.leaf_size = 0.0;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.leaf_size = 1.0;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.leaf_size = 0.01;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(VoxelGridConfig::AbstractParamDescriptionConstPtr(new VoxelGridConfig::ParamDescription<double>("leaf_size", "double", 0, "The size of a leaf (on x,y,z) used for downsampling.", "", &VoxelGridConfig::leaf_size)));
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(VoxelGridConfig::AbstractParamDescriptionConstPtr(new VoxelGridConfig::ParamDescription<double>("leaf_size", "double", 0, "The size of a leaf (on x,y,z) used for downsampling.", "", &VoxelGridConfig::leaf_size)));
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.filter_field_name = "";
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.filter_field_name = "";
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.filter_field_name = "z";
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(VoxelGridConfig::AbstractParamDescriptionConstPtr(new VoxelGridConfig::ParamDescription<std::string>("filter_field_name", "str", 0, "The field name used for filtering", "", &VoxelGridConfig::filter_field_name)));
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(VoxelGridConfig::AbstractParamDescriptionConstPtr(new VoxelGridConfig::ParamDescription<std::string>("filter_field_name", "str", 0, "The field name used for filtering", "", &VoxelGridConfig::filter_field_name)));
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.filter_limit_min = -100000.0;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.filter_limit_min = 100000.0;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.filter_limit_min = 0.0;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(VoxelGridConfig::AbstractParamDescriptionConstPtr(new VoxelGridConfig::ParamDescription<double>("filter_limit_min", "double", 0, "The minimum allowed field value a point will be considered from", "", &VoxelGridConfig::filter_limit_min)));
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(VoxelGridConfig::AbstractParamDescriptionConstPtr(new VoxelGridConfig::ParamDescription<double>("filter_limit_min", "double", 0, "The minimum allowed field value a point will be considered from", "", &VoxelGridConfig::filter_limit_min)));
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.filter_limit_max = -100000.0;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.filter_limit_max = 100000.0;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.filter_limit_max = 1.0;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(VoxelGridConfig::AbstractParamDescriptionConstPtr(new VoxelGridConfig::ParamDescription<double>("filter_limit_max", "double", 0, "The maximum allowed field value a point will be considered from", "", &VoxelGridConfig::filter_limit_max)));
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(VoxelGridConfig::AbstractParamDescriptionConstPtr(new VoxelGridConfig::ParamDescription<double>("filter_limit_max", "double", 0, "The maximum allowed field value a point will be considered from", "", &VoxelGridConfig::filter_limit_max)));
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.filter_limit_negative = 0;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.filter_limit_negative = 1;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.filter_limit_negative = 0;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(VoxelGridConfig::AbstractParamDescriptionConstPtr(new VoxelGridConfig::ParamDescription<bool>("filter_limit_negative", "bool", 0, "Set to true if we want to return the data outside [filter_limit_min; filter_limit_max].", "", &VoxelGridConfig::filter_limit_negative)));
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(VoxelGridConfig::AbstractParamDescriptionConstPtr(new VoxelGridConfig::ParamDescription<bool>("filter_limit_negative", "bool", 0, "Set to true if we want to return the data outside [filter_limit_min; filter_limit_max].", "", &VoxelGridConfig::filter_limit_negative)));
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.keep_organized = 0;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.keep_organized = 1;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.keep_organized = 0;
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(VoxelGridConfig::AbstractParamDescriptionConstPtr(new VoxelGridConfig::ParamDescription<bool>("keep_organized", "bool", 0, "Set whether the filtered points should be kept and set to NaN, or removed from the PointCloud, thus potentially breaking its organized structure.", "", &VoxelGridConfig::keep_organized)));
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(VoxelGridConfig::AbstractParamDescriptionConstPtr(new VoxelGridConfig::ParamDescription<bool>("keep_organized", "bool", 0, "Set whether the filtered points should be kept and set to NaN, or removed from the PointCloud, thus potentially breaking its organized structure.", "", &VoxelGridConfig::keep_organized)));
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.input_frame = "";
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.input_frame = "";
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.input_frame = "";
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(VoxelGridConfig::AbstractParamDescriptionConstPtr(new VoxelGridConfig::ParamDescription<std::string>("input_frame", "str", 0, "The input TF frame the data should be transformed into before processing, if input.header.frame_id is different.", "", &VoxelGridConfig::input_frame)));
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(VoxelGridConfig::AbstractParamDescriptionConstPtr(new VoxelGridConfig::ParamDescription<std::string>("input_frame", "str", 0, "The input TF frame the data should be transformed into before processing, if input.header.frame_id is different.", "", &VoxelGridConfig::input_frame)));
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.output_frame = "";
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.output_frame = "";
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.output_frame = "";
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(VoxelGridConfig::AbstractParamDescriptionConstPtr(new VoxelGridConfig::ParamDescription<std::string>("output_frame", "str", 0, "The output TF frame the data should be transformed into after processing, if input.header.frame_id is different.", "", &VoxelGridConfig::output_frame)));
//#line 280 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(VoxelGridConfig::AbstractParamDescriptionConstPtr(new VoxelGridConfig::ParamDescription<std::string>("output_frame", "str", 0, "The output TF frame the data should be transformed into after processing, if input.header.frame_id is different.", "", &VoxelGridConfig::output_frame)));
//#line 235 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.convertParams();
//#line 235 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __group_descriptions__.push_back(VoxelGridConfig::AbstractGroupDescriptionConstPtr(new VoxelGridConfig::GroupDescription<VoxelGridConfig::DEFAULT, VoxelGridConfig>(Default)));
//#line 353 "/opt/ros/kinetic/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"

      for (std::vector<VoxelGridConfig::AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); ++i)
      {
        __description_message__.groups.push_back(**i);
      }
      __max__.__toMessage__(__description_message__.max, __param_descriptions__, __group_descriptions__); 
      __min__.__toMessage__(__description_message__.min, __param_descriptions__, __group_descriptions__); 
      __default__.__toMessage__(__description_message__.dflt, __param_descriptions__, __group_descriptions__); 
    }
    std::vector<VoxelGridConfig::AbstractParamDescriptionConstPtr> __param_descriptions__;
    std::vector<VoxelGridConfig::AbstractGroupDescriptionConstPtr> __group_descriptions__;
    VoxelGridConfig __max__;
    VoxelGridConfig __min__;
    VoxelGridConfig __default__;
    dynamic_reconfigure::ConfigDescription __description_message__;

    static const VoxelGridConfigStatics *get_instance()
    {
      // Split this off in a separate function because I know that
      // instance will get initialized the first time get_instance is
      // called, and I am guaranteeing that get_instance gets called at
      // most once.
      static VoxelGridConfigStatics instance;
      return &instance;
    }
  };

  inline const dynamic_reconfigure::ConfigDescription &VoxelGridConfig::__getDescriptionMessage__() 
  {
    return __get_statics__()->__description_message__;
  }

  inline const VoxelGridConfig &VoxelGridConfig::__getDefault__()
  {
    return __get_statics__()->__default__;
  }
  
  inline const VoxelGridConfig &VoxelGridConfig::__getMax__()
  {
    return __get_statics__()->__max__;
  }
  
  inline const VoxelGridConfig &VoxelGridConfig::__getMin__()
  {
    return __get_statics__()->__min__;
  }
  
  inline const std::vector<VoxelGridConfig::AbstractParamDescriptionConstPtr> &VoxelGridConfig::__getParamDescriptions__()
  {
    return __get_statics__()->__param_descriptions__;
  }

  inline const std::vector<VoxelGridConfig::AbstractGroupDescriptionConstPtr> &VoxelGridConfig::__getGroupDescriptions__()
  {
    return __get_statics__()->__group_descriptions__;
  }

  inline const VoxelGridConfigStatics *VoxelGridConfig::__get_statics__()
  {
    const static VoxelGridConfigStatics *statics;
  
    if (statics) // Common case
      return statics;

    boost::mutex::scoped_lock lock(dynamic_reconfigure::__init_mutex__);

    if (statics) // In case we lost a race.
      return statics;

    statics = VoxelGridConfigStatics::get_instance();
    
    return statics;
  }


}

#endif // __VOXELGRIDRECONFIGURATOR_H__
