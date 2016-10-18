// Auto-generated. Do not edit!

// (in-package actionlib.msg)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');

//-----------------------------------------------------------

class TwoIntsFeedback {
  constructor() {
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type TwoIntsFeedback
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type TwoIntsFeedback
    let tmp;
    let len;
    let data = new TwoIntsFeedback();
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a message object
    return 'actionlib/TwoIntsFeedback';
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

module.exports = TwoIntsFeedback;
