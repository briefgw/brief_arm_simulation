// Auto-generated. Do not edit!

// (in-package actionlib_tutorials.msg)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');

//-----------------------------------------------------------

class AveragingFeedback {
  constructor() {
    this.sample = 0;
    this.data = 0.0;
    this.mean = 0.0;
    this.std_dev = 0.0;
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type AveragingFeedback
    // Serialize message field [sample]
    bufferInfo = _serializer.int32(obj.sample, bufferInfo);
    // Serialize message field [data]
    bufferInfo = _serializer.float32(obj.data, bufferInfo);
    // Serialize message field [mean]
    bufferInfo = _serializer.float32(obj.mean, bufferInfo);
    // Serialize message field [std_dev]
    bufferInfo = _serializer.float32(obj.std_dev, bufferInfo);
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type AveragingFeedback
    let tmp;
    let len;
    let data = new AveragingFeedback();
    // Deserialize message field [sample]
    tmp = _deserializer.int32(buffer);
    data.sample = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [data]
    tmp = _deserializer.float32(buffer);
    data.data = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [mean]
    tmp = _deserializer.float32(buffer);
    data.mean = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [std_dev]
    tmp = _deserializer.float32(buffer);
    data.std_dev = tmp.data;
    buffer = tmp.buffer;
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a message object
    return 'actionlib_tutorials/AveragingFeedback';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '9e8dfc53c2f2a032ca33fa80ec46fd4f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    #feedback
    int32 sample
    float32 data
    float32 mean
    float32 std_dev
    
    
    `;
  }

};

module.exports = AveragingFeedback;
