// Auto-generated. Do not edit!

// (in-package control_msgs.msg)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');
let JointTolerance = require('./JointTolerance.js');
let trajectory_msgs = _finder('trajectory_msgs');

//-----------------------------------------------------------

class FollowJointTrajectoryGoal {
  constructor() {
    this.trajectory = new trajectory_msgs.msg.JointTrajectory();
    this.path_tolerance = [];
    this.goal_tolerance = [];
    this.goal_time_tolerance = {secs: 0, nsecs: 0};
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type FollowJointTrajectoryGoal
    // Serialize message field [trajectory]
    bufferInfo = trajectory_msgs.msg.JointTrajectory.serialize(obj.trajectory, bufferInfo);
    // Serialize the length for message field [path_tolerance]
    bufferInfo = _serializer.uint32(obj.path_tolerance.length, bufferInfo);
    // Serialize message field [path_tolerance]
    obj.path_tolerance.forEach((val) => {
      bufferInfo = JointTolerance.serialize(val, bufferInfo);
    });
    // Serialize the length for message field [goal_tolerance]
    bufferInfo = _serializer.uint32(obj.goal_tolerance.length, bufferInfo);
    // Serialize message field [goal_tolerance]
    obj.goal_tolerance.forEach((val) => {
      bufferInfo = JointTolerance.serialize(val, bufferInfo);
    });
    // Serialize message field [goal_time_tolerance]
    bufferInfo = _serializer.duration(obj.goal_time_tolerance, bufferInfo);
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type FollowJointTrajectoryGoal
    let tmp;
    let len;
    let data = new FollowJointTrajectoryGoal();
    // Deserialize message field [trajectory]
    tmp = trajectory_msgs.msg.JointTrajectory.deserialize(buffer);
    data.trajectory = tmp.data;
    buffer = tmp.buffer;
    // Deserialize array length for message field [path_tolerance]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [path_tolerance]
    data.path_tolerance = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = JointTolerance.deserialize(buffer);
      data.path_tolerance[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize array length for message field [goal_tolerance]
    tmp = _deserializer.uint32(buffer);
    len = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [goal_tolerance]
    data.goal_tolerance = new Array(len);
    for (let i = 0; i < len; ++i) {
      tmp = JointTolerance.deserialize(buffer);
      data.goal_tolerance[i] = tmp.data;
      buffer = tmp.buffer;
    }
    // Deserialize message field [goal_time_tolerance]
    tmp = _deserializer.duration(buffer);
    data.goal_time_tolerance = tmp.data;
    buffer = tmp.buffer;
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a message object
    return 'control_msgs/FollowJointTrajectoryGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '69636787b6ecbde4d61d711979bc7ecb';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # The joint trajectory to follow
    trajectory_msgs/JointTrajectory trajectory
    
    # Tolerances for the trajectory.  If the measured joint values fall
    # outside the tolerances the trajectory goal is aborted.  Any
    # tolerances that are not specified (by being omitted or set to 0) are
    # set to the defaults for the action server (often taken from the
    # parameter server).
    
    # Tolerances applied to the joints as the trajectory is executed.  If
    # violated, the goal aborts with error_code set to
    # PATH_TOLERANCE_VIOLATED.
    JointTolerance[] path_tolerance
    
    # To report success, the joints must be within goal_tolerance of the
    # final trajectory value.  The goal must be achieved by time the
    # trajectory ends plus goal_time_tolerance.  (goal_time_tolerance
    # allows some leeway in time, so that the trajectory goal can still
    # succeed even if the joints reach the goal some time after the
    # precise end time of the trajectory).
    #
    # If the joints are not within goal_tolerance after "trajectory finish
    # time" + goal_time_tolerance, the goal aborts with error_code set to
    # GOAL_TOLERANCE_VIOLATED
    JointTolerance[] goal_tolerance
    duration goal_time_tolerance
    
    
    ================================================================================
    MSG: trajectory_msgs/JointTrajectory
    Header header
    string[] joint_names
    JointTrajectoryPoint[] points
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    # 0: no frame
    # 1: global frame
    string frame_id
    
    ================================================================================
    MSG: trajectory_msgs/JointTrajectoryPoint
    # Each trajectory point specifies either positions[, velocities[, accelerations]]
    # or positions[, effort] for the trajectory to be executed.
    # All specified values are in the same order as the joint names in JointTrajectory.msg
    
    float64[] positions
    float64[] velocities
    float64[] accelerations
    float64[] effort
    duration time_from_start
    
    ================================================================================
    MSG: control_msgs/JointTolerance
    # The tolerances specify the amount the position, velocity, and
    # accelerations can vary from the setpoints.  For example, in the case
    # of trajectory control, when the actual position varies beyond
    # (desired position + position tolerance), the trajectory goal may
    # abort.
    # 
    # There are two special values for tolerances:
    #  * 0 - The tolerance is unspecified and will remain at whatever the default is
    #  * -1 - The tolerance is "erased".  If there was a default, the joint will be
    #         allowed to move without restriction.
    
    string name
    float64 position  # in radians or meters (for a revolute or prismatic joint, respectively)
    float64 velocity  # in rad/sec or m/sec
    float64 acceleration  # in rad/sec^2 or m/sec^2
    
    `;
  }

};

module.exports = FollowJointTrajectoryGoal;
