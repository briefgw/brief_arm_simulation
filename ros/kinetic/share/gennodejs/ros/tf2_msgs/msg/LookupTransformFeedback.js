// Auto-generated. Do not edit!

// (in-package tf2_msgs.msg)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');

//-----------------------------------------------------------

class LookupTransformFeedback {
  constructor() {
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type LookupTransformFeedback
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type LookupTransformFeedback
    let tmp;
    let len;
    let data = new LookupTransformFeedback();
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a message object
    return 'tf2_msgs/LookupTransformFeedback';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd41d8cd98f00b204e9800998ecf8427e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    
    `;
  }

};

module.exports = LookupTransformFeedback;
