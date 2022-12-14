// GENERATED FILE - DO NOT EDIT.
// Generated by gen_vk_internal_shaders.py.
//
// Copyright 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// shaders/gen/BlitResolveStencilNoExport.comp.00000003.inc:
//   Pre-generated shader for the ANGLE Vulkan back-end.

#pragma once
constexpr uint8_t kBlitResolveStencilNoExport_comp_00000003[] = {
    0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x02,0xff,0x5d,0x95,0xeb,0x6f,0xd4,0x45,
    0x14,0x86,0x67,0x2f,0xdd,0x2d,0xab,0x6d,0x29,0xb4,0xdc,0x6f,0xb5,0xa6,0x8a,0x4b,
    0x00,0x13,0x74,0x2b,0x52,0x54,0x9a,0x88,0x68,0x5b,0xc1,0xaa,0x34,0x7c,0x29,0x4d,
    0xa0,0x2d,0x41,0xb1,0x8d,0x88,0xb6,0xa9,0x28,0x48,0x40,0x0d,0x46,0xe2,0x07,0x12,
    0xa8,0x4d,0x10,0x48,0x0c,0x14,0x34,0xc6,0x98,0xf8,0x05,0x51,0xd4,0x10,0xfc,0x7f,
    0xb8,0x69,0x8c,0x9e,0x77,0xf6,0x19,0x72,0xb2,0x9b,0x9c,0xcc,0xce,0x7b,0xae,0xef,
    0x99,0x33,0xbf,0xc9,0x65,0xdb,0x8b,0x21,0x64,0x42,0x29,0xd4,0x87,0xbf,0x42,0xf5,
    0xd7,0x1c,0xb2,0x86,0x84,0xf0,0x50,0x28,0xc4,0x75,0x6b,0x4f,0x7f,0xcf,0xda,0x77,
    0x0f,0xee,0x59,0xbb,0xe1,0xa9,0xf5,0xd2,0x37,0x86,0x5c,0xb4,0x93,0xae,0xc9,0x6c,
    0xea,0x6c,0xcd,0x9b,0xbc,0x3d,0xb4,0xef,0x80,0xf0,0x06,0x93,0xb9,0x86,0xe7,0x63,
    0xac,0x60,0x91,0xab,0x12,0x63,0x19,0xda,0x10,0x63,0x87,0xb0,0xcc,0xe4,0x25,0xf3,
    0x5e,0x4e,0xde,0x76,0xd6,0x84,0x65,0xc0,0xea,0x1d,0x96,0x05,0x9b,0xeb,0xb0,0x1c,
    0xd8,0x22,0x87,0xe5,0xc1,0x7c,0x8e,0x3a,0xb0,0x55,0x0e,0x2b,0x80,0xad,0x77,0x58,
    0x11,0x6c,0x83,0xc3,0xea,0xc1,0x3a,0x1d,0x36,0x07,0x6c,0x53,0xe4,0x95,0x7b,0x50,
    0x9f,0x38,0x1e,0xb6,0xf5,0x11,0xf8,0xa4,0x7d,0x9b,0xeb,0xc1,0x59,0x72,0xe7,0x89,
    0x37,0x5d,0xd3,0x03,0xc5,0x9b,0x86,0x9b,0xec,0x67,0x6a,0xe2,0xcd,0x10,0x2f,0xed,
    0xaf,0xd0,0xd3,0xc5,0x26,0xf3,0xad,0x8a,0x6c,0xd4,0xe7,0xa2,0xbf,0xfe,0xb7,0x9a,
    0x4d,0x01,0xee,0xaa,0x61,0xa1,0xed,0x8b,0xd4,0x90,0xf4,0x25,0xf4,0x01,0xbd,0xe2,
    0x95,0xa8,0x61,0x95,0xed,0x1f,0xc6,0x57,0xf8,0xb3,0xec,0x1b,0xc0,0xca,0xf8,0x37,
    0xe2,0x2f,0xfb,0x26,0x74,0x25,0xa7,0x9f,0x07,0xe7,0xb4,0x6f,0xc5,0x66,0x81,0x65,
    0x59,0x42,0x7e,0xe5,0x5e,0x6a,0xeb,0x12,0x6a,0xd3,0x7e,0x99,0xeb,0xd7,0x0a,0xcb,
    0x9c,0xce,0x69,0x29,0x52,0x40,0x92,0x5d,0xc9,0x89,0x6a,0x59,0xc1,0x79,0x2d,0xa7,
    0x76,0xed,0x57,0x82,0x95,0x5d,0x6f,0xea,0xb0,0x6f,0x43,0xa7,0x78,0x2d,0x56,0x45,
    0x07,0x75,0x3c,0x66,0x6b,0x07,0x75,0x25,0xbf,0x8a,0xe3,0xdc,0x89,0x5f,0xd1,0xe9,
    0xbb,0xd8,0x4b,0xbf,0x19,0x7d,0xc9,0xe9,0xb7,0x31,0x5f,0x69,0xdf,0x5f,0x53,0xd7,
    0xa0,0xc9,0x7f,0xf6,0x4b,0xfb,0xdd,0xae,0xe7,0xda,0xef,0xa7,0x2f,0x8a,0x7f,0x10,
    0xdf,0x42,0x9c,0x85,0x39,0x61,0x8a,0x5c,0x19,0x6a,0xcc,0x38,0x49,0x35,0x7f,0xc8,
    0xff,0x29,0x7a,0xa3,0xfd,0x61,0xb0,0x94,0xe3,0x08,0x73,0xa0,0x1e,0x1c,0x23,0x7e,
    0xda,0x7f,0x4a,0x0e,0x7f,0xae,0x27,0x55,0x73,0xec,0x77,0x2e,0xce,0x7a,0x29,0x9e,
    0x5b,0x75,0xa6,0xcf,0x92,0xf7,0x6b,0xfa,0x38,0x4d,0x5e,0xed,0x67,0x6a,0x7a,0x7b,
    0x8e,0x5c,0xb2,0xbf,0x84,0xce,0xcf,0xd3,0x2c,0xbd,0x5b,0x63,0x56,0x9a,0xcb,0x2b,
    0x60,0xb3,0xcc,0xd6,0xd3,0x76,0xa2,0x59,0x6a,0x0b,0xd4,0x7c,0xcf,0x10,0x9d,0xf3,
    0x5d,0xdb,0x5d,0x05,0xff,0xc7,0xfe,0x6b,0x76,0xbf,0x43,0xaf,0xf5,0x05,0xb3,0x6a,
    0xe2,0x5b,0xd3,0xc0,0x6c,0x77,0x91,0xb7,0x19,0xfc,0x98,0xd9,0x94,0xe2,0x9d,0xab,
    0x62,0xf3,0x62,0x1f,0xab,0xb5,0xb7,0x80,0xa7,0x38,0x0b,0x88,0xd3,0xea,0xe2,0x2c,
    0x04,0x4f,0x3e,0x8b,0xc0,0xb6,0x9b,0x4f,0x91,0xfb,0xdc,0x02,0xae,0x38,0x6d,0x7c,
    0x07,0x56,0x32,0xaf,0x5d,0xdc,0x8d,0x76,0xf0,0x57,0xcd,0x4b,0x7e,0x8f,0x82,0xb5,
    0xd3,0x33,0xf1,0xfe,0xd1,0xfc,0x35,0xbf,0x8f,0xa3,0x5f,0x1c,0xcf,0x22,0x1f,0xe7,
    0x79,0x35,0xb8,0x7a,0x52,0xa6,0x27,0x7f,0x9b,0x4e,0xf8,0x13,0xb1,0xdf,0xd5,0xbe,
    0xe8,0xff,0x7d,0x5b,0xaf,0xb2,0x2f,0xbb,0x9c,0xeb,0x5c,0xce,0x34,0x6b,0x1f,0xc3,
    0xe3,0x49,0xf2,0xad,0x83,0x87,0xee,0xc9,0x33,0xf0,0xa8,0xc0,0x43,0x76,0x1b,0xc1,
    0x8f,0xe2,0xb7,0x09,0xdf,0x8d,0xf8,0xe9,0xfe,0x3c,0x87,0x5f,0x97,0xeb,0xe3,0xf3,
    0xe0,0xb3,0x66,0xd3,0x11,0x6d,0xab,0x58,0x23,0x9c,0xba,0x1d,0x27,0xe9,0xb6,0x98,
    0x74,0xc3,0x41,0xff,0x77,0x98,0x9f,0xfa,0xff,0x22,0x39,0x43,0xbc,0x03,0xd5,0x33,
    0xd9,0x0a,0xfe,0x9a,0xed,0x54,0xd3,0x4f,0x60,0xc9,0x4e,0xfd,0x48,0xb1,0xb4,0xde,
    0xa6,0x1f,0xbf,0x60,0x53,0xc6,0x67,0x8b,0xe3,0xf0,0x32,0x1c,0xb6,0x39,0x0e,0xaf,
    0x80,0x27,0x0e,0x3d,0x60,0x89,0x43,0x9f,0xe3,0x20,0x5d,0xaf,0x49,0x1f,0x79,0x7b,
    0x1d,0x87,0xed,0xe4,0xce,0x38,0x0e,0x3b,0xc0,0x13,0x87,0x9f,0xc1,0x92,0x9d,0x38,
    0xa4,0x58,0x7d,0x8e,0xc3,0x75,0x6c,0xba,0xf1,0xe9,0x75,0x1c,0x5e,0x87,0x43,0xbf,
    0xe3,0xf0,0x06,0x78,0xe2,0xf0,0x26,0x58,0xe2,0x30,0xe0,0x38,0x48,0xb7,0xd3,0x64,
    0x80,0xbc,0x3b,0xdd,0x2c,0xed,0x22,0xf7,0x75,0xf7,0xad,0x52,0x8d,0xc9,0x76,0xc0,
    0xd5,0xf8,0x3b,0x76,0x7d,0xf8,0x29,0xce,0x25,0xe3,0x29,0xde,0x43,0xcc,0xc2,0x20,
    0xdf,0x4d,0xc5,0xd8,0x4b,0x8c,0xbd,0x2e,0xc6,0x0d,0xe2,0x28,0xee,0x35,0x93,0x51,
    0x74,0xe2,0xf4,0x1b,0xf5,0x4b,0x77,0xcb,0xe9,0x14,0xff,0x57,0xe6,0x57,0xba,0x33,
    0xe8,0x7e,0x80,0xfb,0x5b,0xe8,0xf5,0x7d,0xbe,0x63,0x7c,0x47,0xd0,0x27,0xfe,0xd2,
    0x0f,0x9b,0x8c,0x50,0xcf,0xb0,0x3b,0xc3,0x03,0xd4,0xa4,0xdf,0xf7,0xc4,0x7b,0x07,
    0xbc,0x42,0x2f,0xc7,0x5d,0x2c,0xe9,0xc6,0x4c,0xc6,0x89,0x35,0xc6,0x39,0xe9,0x3d,
    0x78,0x8f,0x73,0xda,0xcf,0x39,0x29,0xfe,0x21,0xf0,0x54,0xeb,0xfb,0xc4,0x3e,0x44,
    0x8f,0x52,0x9c,0x71,0xb8,0xca,0xe6,0x03,0x6a,0x18,0xc6,0x7e,0x8c,0x3a,0x26,0x5d,
    0x1d,0xb2,0x99,0x30,0x99,0xc4,0x7f,0x82,0x9c,0x7a,0x5b,0x3e,0xe2,0x5d,0x49,0x75,
    0x1d,0xa5,0xae,0x23,0xae,0xae,0x4f,0xc0,0x53,0x1f,0x8e,0xd3,0x87,0x4c,0x9c,0xdf,
    0x42,0x7c,0x7b,0x4e,0x50,0xeb,0x71,0xec,0x07,0xad,0x3e,0xbd,0x41,0x9f,0x91,0xe3,
    0x04,0x77,0xbf,0x42,0x1c,0x9d,0xe1,0xe7,0xe8,0xf5,0xbb,0x09,0xf6,0x05,0xf8,0x49,
    0xbe,0xe3,0xca,0xf7,0x25,0x67,0xa6,0x7b,0xf9,0x07,0x76,0xa7,0xb0,0x95,0xee,0x4f,
    0xb0,0xaf,0x98,0x8b,0x53,0xf4,0x2b,0xf1,0x9d,0x74,0x73,0x73,0x0b,0x9b,0x71,0xec,
    0x27,0xf8,0x1e,0x2a,0xcf,0x69,0x38,0x0c,0xb9,0x3b,0x79,0x0d,0xfc,0x86,0x9b,0xf7,
    0x51,0xe2,0x8e,0x3a,0xdf,0x33,0xd4,0x58,0x3b,0xcf,0x23,0xae,0xb7,0xdf,0xd0,0xdb,
    0x73,0xae,0xb7,0xe7,0xc1,0xa7,0xb8,0xab,0x17,0xc0,0xd2,0x1b,0x76,0x91,0xb7,0xe7,
    0x02,0xb9,0x84,0x7d,0x0b,0xde,0x1c,0x63,0x17,0xe2,0x1b,0x7c,0x99,0x77,0xba,0x82,
    0x7e,0xb3,0xcd,0xc0,0x65,0xb8,0xfa,0xb7,0x41,0xeb,0xbf,0x76,0x72,0x9d,0x26,0xff,
    0x03,0xd9,0xf4,0x6d,0x73,0x68,0x0c,0x00,0x00
};

// Generated from:
//
// #version 450 core
//
// #extension GL_EXT_samplerless_texture_functions : require
//
// layout(local_size_x = 8, local_size_y = 8, local_size_z = 1)in;
//
// layout(push_constant)uniform PushConstants {
//
//             ivec2 offset;
//     vec2 stretch;
//     vec2 invSrcExtent;
//     int srcLayer;
//     int srcWidth;
//
//     ivec4 blitArea;
//     int destPitch;
//
//     bool flipX;
//     bool flipY;
//     bool rotateXY;
// } params;
//
// layout(set = 0, binding = 0)buffer dst
// {
//
//     uint destData[];
// };
//
// layout(set = 0, binding = 1)uniform utexture2DMSArray stencil;
//
// void main()
// {
//     ivec2 destSubImageCoords = ivec2(gl_GlobalInvocationID . x * 4, gl_GlobalInvocationID . y);
//     if(any(lessThanEqual(params . blitArea . zw, destSubImageCoords)))
//     {
//         return;
//     }
//
//     destSubImageCoords += params . blitArea . xy;
//             ivec2 srcImageCoords = ivec2(destSubImageCoords);
//
//     srcImageCoords -= params . offset;
//
//     if(params . flipX)
//         srcImageCoords . x = - srcImageCoords . x;
//     if(params . flipY)
//         srcImageCoords . y = - srcImageCoords . y;
//     if(params . rotateXY)
//         srcImageCoords . xy = srcImageCoords . yx;
//
//     int xDir = params . flipX ? - 1 : 1;
//
//     uint outStencils = 0;
//
//     for(int i = 0;i < 4;++ i)
//     {
//
//         if(srcImageCoords . x >= 0 && srcImageCoords . x < params . srcWidth)
//         {
//
//             uint stencilValue = texelFetch(stencil, ivec3(srcImageCoords, params . srcLayer), 0). x;
//
//             outStencils |=(stencilValue & 0xFF)<<(i * 8);
//
//         }
//
//         srcImageCoords . x += xDir;
//     }
//
//     destData[gl_GlobalInvocationID . y * params . destPitch + gl_GlobalInvocationID . x]= outStencils;
// }
