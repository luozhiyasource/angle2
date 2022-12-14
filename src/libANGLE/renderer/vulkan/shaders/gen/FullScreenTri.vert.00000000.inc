// GENERATED FILE - DO NOT EDIT.
// Generated by gen_vk_internal_shaders.py.
//
// Copyright 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// shaders/gen/FullScreenTri.vert.00000000.inc:
//   Pre-generated shader for the ANGLE Vulkan back-end.

#pragma once
constexpr uint8_t kFullScreenTri_vert_00000000[] = {
    0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x02,0xff,0x4d,0x52,0xcb,0x4e,0x02,0x41,
    0x10,0xec,0xdd,0x95,0x05,0x51,0x96,0x05,0x04,0xe4,0x29,0x2f,0xc5,0xa8,0x21,0x1e,
    0xd4,0x98,0x18,0x15,0x4f,0x78,0xe0,0xa0,0xf1,0x0b,0x4c,0xb8,0x78,0xd0,0x8b,0x7e,
    0x80,0x7f,0xe6,0x6f,0x79,0x31,0xb1,0x6a,0xb6,0x36,0x99,0x49,0x7a,0x67,0xba,0xba,
    0xa6,0xbb,0x7a,0x7a,0xa3,0x70,0x5a,0x34,0x0b,0xac,0x6c,0x25,0x3b,0xb6,0x6c,0xd5,
    0x2c,0x04,0x62,0xb6,0x63,0xb1,0xdb,0x57,0xeb,0x97,0xf5,0xe2,0xf3,0x6b,0xb3,0xb8,
    0xb8,0x3c,0x67,0x3c,0xb1,0xc8,0xf1,0x18,0xab,0x5a,0xd1,0x9d,0xb7,0x60,0xef,0xaf,
    0x6f,0x1f,0x3c,0x57,0x60,0x5d,0xd8,0xa3,0x15,0x90,0x23,0x5b,0xf9,0x9e,0x63,0x81,
    0xb0,0xc0,0xc3,0x42,0x61,0x91,0x87,0x45,0xc2,0x98,0x7f,0x05,0x2f,0xe7,0xad,0x80,
    0x74,0x15,0x3b,0x81,0x35,0x80,0x12,0x1f,0x83,0x13,0x89,0xd3,0xc2,0x29,0xc6,0x3e,
    0x82,0xb5,0xc1,0xa7,0xd2,0x58,0xb9,0x9a,0xf8,0x96,0x14,0xe3,0x3a,0x95,0xbf,0x2d,
    0x4d,0x7d,0xf8,0x65,0xf1,0x89,0x0d,0x71,0x62,0xad,0x3c,0x47,0x59,0x36,0x02,0x6f,
    0xd7,0xd3,0x79,0x23,0xbf,0x22,0x8c,0x75,0x12,0xd5,0x09,0x54,0x27,0x71,0xef,0x96,
    0x2d,0xea,0x4a,0x95,0x33,0xf4,0x74,0xd4,0x74,0x9f,0x3a,0xea,0xd8,0x53,0x61,0x8c,
    0xc7,0xae,0x5f,0xae,0xef,0x9f,0x33,0xbc,0x13,0x63,0x7b,0xc2,0x1a,0x1e,0xa7,0xe9,
    0x38,0xcb,0x65,0xce,0x69,0x09,0x23,0x27,0xc7,0xda,0xf2,0x9b,0x0e,0x8b,0x5d,0xad,
    0x7d,0xe5,0x6b,0x29,0xce,0x1e,0x3b,0xd2,0x9f,0xa8,0xc7,0x8e,0x66,0x1c,0x28,0xde,
    0xd7,0xdb,0xd4,0xe5,0x0f,0xe5,0xa7,0x9e,0x9e,0xb1,0xf7,0xd6,0xf4,0x27,0x59,0x0f,
    0xf7,0xe4,0x1f,0xa9,0x5f,0xde,0xb9,0x82,0xb6,0x50,0x73,0x32,0xe1,0xbf,0x40,0x0a,
    0xaa,0xcd,0x5a,0x03,0x71,0x6f,0xf5,0x9e,0x3d,0xe9,0xb9,0x03,0x7b,0xa0,0x1e,0x1e,
    0x70,0x83,0x3a,0x0e,0xc4,0xef,0x89,0x9f,0x6a,0x1e,0xc4,0x9f,0xc1,0xa1,0x96,0xa9,
    0xf7,0x2f,0xe4,0xd8,0xcc,0x9b,0xdb,0x13,0xaa,0xb1,0xde,0xa1,0xb8,0x33,0xf5,0x33,
    0x51,0x1d,0xea,0x9f,0x6b,0xee,0x55,0xe9,0x98,0x8b,0xff,0x87,0x0c,0xd7,0xb0,0x7f,
    0x5f,0x76,0x90,0xde,0x6c,0x03,0x00,0x00
};

// Generated from:
//
// #version 450 core
//
// const vec2 kVertices[]= {
//     vec2(- 1, - 1),
//     vec2(3, - 1),
//     vec2(- 1, 3),
// };
//
// void main()
// {
//     gl_Position = vec4(kVertices[gl_VertexIndex], 0, 1);
// }
