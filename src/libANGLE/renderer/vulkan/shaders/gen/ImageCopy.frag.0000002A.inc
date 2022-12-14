// GENERATED FILE - DO NOT EDIT.
// Generated by gen_vk_internal_shaders.py.
//
// Copyright 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// shaders/gen/ImageCopy.frag.0000002A.inc:
//   Pre-generated shader for the ANGLE Vulkan back-end.

#pragma once
constexpr uint8_t kImageCopy_frag_0000002A[] = {
    0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x02,0xff,0x85,0x96,0xeb,0x4f,0x97,0x65,
    0x18,0xc7,0x9f,0xdf,0x19,0x21,0x0e,0x02,0x4a,0xb8,0xb0,0x3c,0xb0,0xd9,0x30,0xa0,
    0x45,0x46,0x90,0x6e,0x64,0x64,0x19,0xa5,0xe0,0xa1,0x82,0x17,0x1d,0x64,0xa1,0x05,
    0x56,0x50,0x4b,0xd7,0xd6,0x5a,0x98,0xf0,0x26,0xad,0x60,0x8e,0x59,0x2b,0xd8,0x0a,
    0x5e,0x28,0xcc,0x5e,0xb4,0xf5,0xaa,0xb5,0x96,0x32,0xd2,0x0e,0xff,0x4c,0xeb,0xb0,
    0xb5,0x75,0x5f,0xf7,0xef,0x73,0xb9,0x6f,0xbf,0xd5,0x64,0xbb,0xf7,0x3c,0xf7,0xf7,
    0x3a,0x7d,0xbf,0xd7,0x7d,0x3d,0x37,0xbf,0x4c,0x7a,0x5b,0x21,0x49,0x52,0x49,0x79,
    0x52,0x96,0xfc,0x9a,0x14,0xff,0xd6,0x27,0xe9,0x80,0x24,0x49,0x45,0x92,0x8f,0xcf,
    0x7d,0x7d,0x87,0xfa,0x5a,0x27,0xde,0x18,0x6e,0xed,0xb8,0xbf,0xdd,0xec,0x55,0x49,
    0x26,0xfa,0x99,0xad,0x3a,0x29,0x24,0xd9,0xf0,0xb4,0x35,0xf6,0xc2,0x89,0x93,0x86,
    0x57,0x86,0xf5,0x55,0x58,0x35,0xc1,0xcf,0xf0,0x82,0xe5,0x08,0x6f,0x95,0x31,0xa7,
    0xc5,0x24,0xc9,0x63,0x49,0x2e,0xa9,0xa3,0xde,0x36,0x9e,0x8e,0xa5,0xc0,0xca,0x04,
    0x4b,0x83,0xd5,0x08,0x96,0x01,0xab,0x17,0x2c,0x0b,0x76,0xbb,0x60,0x39,0xb0,0x3b,
    0x04,0xcb,0x83,0xdd,0x25,0x58,0x01,0x6c,0xbb,0x60,0x65,0x60,0x3b,0x04,0x5b,0x07,
    0xb6,0x53,0xb0,0x72,0xb0,0x76,0xc1,0x2a,0xc0,0x3a,0x04,0xbb,0x0d,0xac,0x53,0xb0,
    0x4a,0xb0,0x87,0x62,0x9f,0x32,0x37,0xf5,0x5a,0xcf,0xf6,0x86,0xe7,0x56,0xfa,0xe3,
    0xfb,0x2d,0xb2,0xb7,0x3e,0x6f,0x66,0x5f,0x17,0xa2,0xd2,0xd1,0x9e,0x89,0xbd,0xb1,
    0xf7,0x0d,0xc1,0x27,0x8f,0x4e,0xeb,0x6b,0x43,0xd8,0x17,0xd0,0x6f,0xf6,0x8d,0xc1,
    0xb3,0x1c,0xbb,0xd9,0x2a,0xd0,0x92,0x8d,0x58,0x36,0xf2,0x4d,0xa1,0xa5,0x9b,0x7d,
    0xa5,0xe4,0xaa,0xc2,0xdf,0x6b,0xd5,0x92,0x2b,0x89,0xbc,0x6a,0x6e,0xf6,0xd5,0x6b,
    0xda,0xaa,0xbd,0xc5,0x72,0x1f,0xab,0x5f,0x4f,0xbf,0xeb,0xa8,0x5f,0x1f,0xeb,0x14,
    0xb1,0x16,0xb4,0x6d,0x84,0x8f,0xf9,0x37,0x60,0x2b,0x88,0xbd,0x49,0xf4,0x6c,0xc6,
    0x5e,0x1b,0xe7,0x26,0x1d,0x7b,0xd9,0x02,0x6f,0xef,0xb3,0xc7,0xb5,0x30,0x3b,0x6e,
    0xbf,0x97,0x3a,0x6e,0xdf,0x45,0x2f,0xac,0x0f,0x7b,0xc8,0x69,0x75,0x1a,0x43,0x85,
    0x1e,0xf6,0xe9,0xe4,0xdf,0x7f,0x29,0x9e,0xc6,0xe5,0x61,0xde,0x7b,0xd0,0x66,0xfb,
    0xbd,0x25,0x1c,0x7a,0x4b,0xf6,0xfb,0x99,0x7b,0x8b,0x7f,0x02,0x2d,0x79,0x38,0x3c,
    0xc5,0x7b,0x46,0xfc,0x07,0xe0,0xe0,0xfb,0xa3,0xe2,0xff,0x3c,0x1c,0xd5,0xff,0x78,
    0x49,0xef,0x26,0xf9,0x06,0x7c,0x7f,0xbe,0xa4,0xf7,0x17,0x99,0x69,0xe3,0x73,0x85,
    0x5c,0x7b,0xd0,0x73,0x85,0x7b,0x20,0x13,0x7b,0x95,0x8b,0x3c,0xb2,0xe8,0x31,0xec,
    0x8f,0x80,0x58,0x7f,0x77,0x33,0x77,0xd5,0xf4,0xf3,0x40,0x60,0x50,0xc5,0xb7,0x5e,
    0xcd,0xf2,0xde,0x9d,0x64,0x7e,0xd7,0x63,0xef,0x09,0x19,0x1a,0xf8,0xde,0x37,0x30,
    0x0b,0xbb,0xf1,0x69,0x04,0x7f,0x2f,0xf8,0xd8,0x7e,0x13,0x71,0x8d,0xc4,0xd9,0x2c,
    0xdc,0x49,0x5c,0x13,0x71,0x3e,0xbf,0x86,0x5f,0x0a,0x3e,0x5b,0xe4,0x9e,0xb0,0xf9,
    0xf8,0x3d,0x30,0x6f,0x86,0xcf,0x5f,0xc1,0xdf,0xef,0x8b,0x66,0xf4,0xd8,0x7b,0x7f,
    0x88,0xcb,0x73,0x67,0x6c,0xc2,0xf7,0x1d,0xfa,0x75,0x37,0xf8,0x40,0xd8,0x19,0xa7,
    0xaf,0xc1,0xdc,0xef,0xcf,0x90,0xc3,0x73,0xd9,0xf3,0xb7,0xe0,0x65,0x7e,0x57,0xf1,
    0xc9,0x11,0xb3,0x5d,0x34,0xec,0x44,0x43,0x8b,0x68,0xb8,0x07,0xdc,0x35,0xb4,0x82,
    0xb9,0x86,0x76,0xd1,0x60,0xb6,0x36,0xee,0x2e,0xab,0xdb,0x26,0x1a,0xee,0xa3,0x76,
    0x4a,0x34,0x74,0x80,0xbb,0x86,0x6f,0xc0,0xdc,0xcf,0x34,0x78,0xae,0x76,0xd1,0x70,
    0x0d,0x9f,0x66,0x62,0xda,0x44,0xc3,0x03,0x68,0xd8,0x25,0x1a,0x3a,0xc1,0x5d,0xc3,
    0x83,0x60,0xae,0xa1,0x5b,0x34,0x98,0xad,0x2b,0xce,0x5d,0xb1,0x6e,0x17,0x73,0x54,
    0x88,0xf9,0x8a,0xb5,0xaf,0xc9,0xf7,0x67,0x1c,0xdd,0xb7,0x5b,0x38,0xae,0xe2,0xd7,
    0x4e,0x5c,0x17,0x7c,0xec,0x1b,0x7d,0x84,0xef,0xd3,0x67,0xee,0x51,0x38,0xf7,0xca,
    0xcc,0xed,0x03,0x7f,0x97,0x99,0x7b,0x1c,0x6c,0x95,0x38,0xfb,0x66,0xfb,0x88,0xdb,
    0x4f,0x9c,0xf5,0xf4,0x49,0x70,0xef,0xfb,0x01,0x62,0x13,0xc1,0x0e,0x82,0xa5,0xe2,
    0x7b,0x3e,0x7e,0xef,0xfd,0xf8,0x1e,0x24,0x87,0xd7,0x38,0x44,0x8d,0x01,0xa9,0x71,
    0x18,0xfc,0xb9,0xc0,0xcc,0xbe,0xd1,0x23,0x68,0xea,0xe7,0x8e,0x38,0x2c,0xe7,0xf1,
    0x34,0xf1,0x47,0xe5,0x3c,0x9e,0x01,0xf7,0xf3,0x78,0x16,0xcc,0xcf,0x63,0x48,0xce,
    0xc3,0x6c,0x83,0x61,0x8d,0xd0,0xe3,0x41,0x74,0xd4,0xc6,0xfa,0xc5,0xda,0x99,0xc8,
    0xbd,0x2c,0xde,0x43,0x2f,0x82,0x1d,0x91,0x6f,0x3d,0x8d,0x4e,0xb3,0x1f,0x23,0xce,
    0xd7,0x99,0x90,0xcb,0xf0,0x61,0x62,0x8f,0xc5,0x5c,0xeb,0xa2,0xae,0x97,0xc8,0x33,
    0xcc,0x7d,0x93,0x93,0x7b,0xd1,0xce,0x7d,0x08,0x4e,0x23,0xa2,0xf7,0x04,0x7a,0x8f,
    0x8b,0xde,0x97,0xc1,0x5d,0xef,0x2b,0x60,0xae,0x77,0x4c,0xf4,0x9a,0x6d,0xd4,0x7e,
    0x03,0x91,0x7b,0x54,0xf4,0xbe,0x2a,0x7a,0x2f,0x93,0xeb,0x35,0xf0,0xad,0x70,0xf2,
    0xb8,0x31,0x66,0xd1,0x7c,0x5e,0xa7,0xe6,0x08,0xfe,0xa3,0xd4,0x9d,0x90,0xba,0xe6,
    0x33,0x1e,0xd6,0x04,0xf1,0xe3,0x52,0xf7,0xcd,0xff,0xe8,0xf3,0x5b,0xb7,0xe8,0xf3,
    0x29,0xe2,0x7c,0x9d,0xa5,0xcf,0xa7,0x89,0x3d,0x25,0x7d,0x7e,0x9b,0x3c,0xa7,0xff,
    0xa7,0xcf,0xce,0x69,0x02,0x4d,0x16,0xf3,0x23,0x31,0x63,0xc4,0x8f,0x97,0x9c,0xc9,
    0x90,0xf8,0xae,0x71,0x96,0x83,0xc4,0x4d,0xc8,0x79,0x9d,0xe1,0xbc,0x26,0xe5,0xbc,
    0xde,0x07,0xf7,0xf3,0x3a,0x0b,0xe6,0xe7,0x35,0x2d,0x7d,0x33,0xdb,0x54,0x58,0xe7,
    0xa8,0x3b,0x25,0xba,0x3e,0xa0,0xf6,0x1a,0xba,0x0a,0xf4,0xc8,0x75,0x4d,0x13,0x73,
    0x4e,0xf8,0x7c,0x08,0x9f,0xf3,0xc2,0xe7,0x23,0x70,0xe7,0xf3,0x31,0x98,0xf3,0x99,
    0x15,0x3e,0x66,0x9b,0x09,0x6b,0x8e,0xdc,0x33,0x72,0x8e,0x17,0xe0,0x92,0xe1,0xce,
    0x35,0x8e,0xdf,0x0a,0xee,0xf7,0xd9,0x2c,0xb1,0x73,0x72,0x0f,0x7c,0x02,0xaf,0x8b,
    0x72,0x0f,0x7c,0x0a,0xbe,0xca,0xbd,0xf2,0x19,0xd8,0x80,0x70,0xfd,0x1c,0xbc,0x17,
    0xae,0x0b,0xc2,0xd5,0x6c,0xf3,0x61,0x2d,0x50,0x6f,0x5e,0x78,0x7d,0x87,0xbe,0x35,
    0xf9,0x5f,0xe0,0x7e,0x0b,0x72,0xb6,0xd7,0xf1,0x99,0x23,0x66,0x5e,0xf8,0x7c,0x01,
    0x9f,0x26,0xe1,0xf3,0x25,0xb8,0xf3,0x59,0x12,0x3e,0x66,0x5b,0x0c,0x6b,0x89,0x3a,
    0x8b,0xc2,0xe7,0x7b,0xf8,0x5c,0xe7,0x0c,0x8d,0x8f,0xfb,0x2d,0x09,0x9f,0x1b,0xf8,
    0x2c,0x10,0xb3,0x28,0x7c,0x2e,0xc1,0x67,0x52,0xf8,0x5c,0x06,0x77,0x3e,0x2b,0xc2,
    0xc7,0x6c,0xcb,0x61,0xad,0x50,0x67,0x59,0xf8,0xfc,0xc0,0xef,0xc8,0x1b,0x32,0x4f,
    0xee,0xb7,0x22,0x7c,0x7e,0xc1,0x67,0x89,0x98,0xe5,0x92,0x33,0x9e,0x15,0xdf,0x9f,
    0x99,0x87,0x19,0xe2,0x56,0x4a,0xe6,0x74,0x5a,0x7c,0x7f,0x62,0xbe,0xa7,0x88,0x9b,
    0x8d,0xbf,0xd7,0x32,0xf1,0x77,0x9a,0xd9,0xfe,0x0e,0xa7,0xd6,0x19,0xd6,0x3f,0x76,
    0x66,0x32,0xbe,0x18,0x0e,0x00,0x00
};

// Generated from:
//
// #version 450 core
//
// #extension GL_EXT_samplerless_texture_functions : require
//
// layout(set = 0, binding = 0)uniform utexture3D src;
// layout(location = 0)out uvec4 dst;
//
// layout(push_constant)uniform PushConstants {
//
//     ivec2 srcOffset;
//     ivec2 dstOffset;
//     int srcMip;
//     int srcLayer;
//
//     bool flipX;
//     bool flipY;
//
//     bool premultiplyAlpha;
//     bool unmultiplyAlpha;
//
//     bool dstHasLuminance;
//     bool dstIsAlpha;
//
//     bool srcIsSRGB;
//     bool dstIsSRGB;
//
//     int dstDefaultChannelsMask;
//     bool rotateXY;
// } params;
//
// void main()
// {
//     ivec2 dstSubImageCoords = ivec2(gl_FragCoord . xy)- params . dstOffset;
//
//     ivec2 srcSubImageCoords = dstSubImageCoords;
//
//     if(params . flipX)
//     {
//         srcSubImageCoords . x = - srcSubImageCoords . x;
//     }
//     if(params . flipY)
//     {
//         srcSubImageCoords . y = - srcSubImageCoords . y;
//     }
//     if(params . rotateXY)
//     {
//         srcSubImageCoords . xy = srcSubImageCoords . yx;
//     }
//
//           uvec4 srcValue = texelFetch(src, ivec3(params . srcOffset + srcSubImageCoords, params . srcLayer), params . srcMip);
//
//     if(params . premultiplyAlpha)
//     {
//         srcValue . rgb *= srcValue . a;
//     }
//     else if(params . unmultiplyAlpha && srcValue . a > 0)
//     {
//         srcValue . rgb /= srcValue . a;
//     }
//
//            uvec4 dstValue = uvec4(srcValue);
//
//     if(params . dstHasLuminance)
//     {
//         dstValue . rg = dstValue . ra;
//     }
//     else if(params . dstIsAlpha)
//     {
//         dstValue . r = dstValue . a;
//     }
//     else
//     {
//         int defaultChannelsMask = params . dstDefaultChannelsMask;
//         if((defaultChannelsMask & 2)!= 0)
//         {
//             dstValue . g = 0;
//         }
//         if((defaultChannelsMask & 4)!= 0)
//         {
//             dstValue . b = 0;
//         }
//         if((defaultChannelsMask & 8)!= 0)
//         {
//             dstValue . a = 1;
//         }
//     }
//
//     dst = dstValue;
// }
