// GENERATED FILE - DO NOT EDIT.
// Generated by gen_builtin_symbols.py using data from builtin_variables.json and
// builtin_function_declarations.txt.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ImmutableString_autogen.cpp: Wrapper for static or pool allocated char arrays, that are
// guaranteed to be valid and unchanged for the duration of the compilation. Implements
// mangledNameHash using perfect hash function from gen_builtin_symbols.py

#include "compiler/translator/ImmutableString.h"

std::ostream &operator<<(std::ostream &os, const sh::ImmutableString &str)
{
    return os.write(str.data(), str.length());
}

#if defined(_MSC_VER)
#    pragma warning(disable : 4309)  // truncation of constant value
#endif

namespace
{

constexpr int kT1[] = {4292, 1592, 4573, 298,  3173, 3569, 4869, 2125, 2112, 3198, 1733, 4935, 1772,
                       748,  1729, 1297, 5087, 4525, 3739, 1397, 1435, 466,  1338, 2385, 2143, 3818,
                       437,  3614, 1476, 2658, 4988, 848,  4735, 2113, 4485, 1905, 4677};
constexpr int kT2[] = {773,  2979, 1124, 532,  4590, 1371, 3189, 659,  1450, 705,  1406, 47,  1843,
                       4783, 3189, 4836, 2299, 303,  782,  2482, 1161, 4792, 2767, 463,  598, 2055,
                       2768, 4489, 4232, 1677, 1321, 501,  3971, 2039, 2368, 485,  353};
constexpr int kG[]  = {
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    1819, 0,    1432, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    1731, 0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    124,  0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    1215, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1018,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1526, 0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    3654,
    0,    4390, 0,    0,    0,    0,    0,    0,    0,    0,    651,  462,  0,    0,    0,    518,
    0,    0,    4759, 0,    0,    2301, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1263, 0,    141,  0,    0,    0,
    16,   0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    862,  0,
    0,    0,    0,    0,    127,  0,    0,    0,    0,    0,    184,  0,    0,    186,  1240, 0,
    0,    5080, 0,    0,    0,    0,    0,    0,    0,    0,    0,    4926, 431,  0,    0,    0,
    0,    0,    0,    4103, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    874,  0,
    0,    0,    629,  0,    0,    0,    0,    0,    0,    4796, 0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    334,  0,    4437, 0,    1824,
    0,    0,    1136, 0,    0,    0,    0,    0,    0,    883,  0,    0,    2978, 0,    0,    0,
    695,  0,    0,    0,    0,    0,    0,    0,    0,    583,  0,    282,  0,    0,    0,    0,
    0,    0,    0,    0,    2848, 0,    0,    0,    0,    5022, 0,    0,    0,    4122, 4340, 0,
    3830, 0,    0,    0,    0,    0,    2272, 0,    0,    0,    1768, 0,    0,    4024, 0,    0,
    0,    0,    0,    0,    0,    4603, 2203, 0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    2278, 0,    0,    0,    2046, 918,  0,    0,    0,    0,
    4553, 0,    0,    1808, 0,    0,    0,    0,    0,    0,    0,    2334, 1739, 0,    0,    440,
    0,    0,    0,    0,    0,    0,    1773, 0,    0,    1880, 0,    0,    656,  0,    0,    379,
    385,  0,    2244, 0,    0,    0,    0,    1792, 0,    0,    4806, 0,    2325, 0,    1550, 0,
    0,    0,    0,    0,    0,    0,    2472, 0,    4596, 0,    430,  0,    0,    360,  0,    0,
    0,    0,    0,    0,    0,    0,    0,    1672, 1301, 0,    1406, 0,    0,    2130, 0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    227,  0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    514,  0,    1010, 0,    0,
    0,    5017, 0,    0,    0,    1490, 552,  0,    0,    0,    0,    0,    1029, 0,    0,    0,
    652,  0,    0,    0,    0,    0,    0,    2464, 0,    3943, 0,    0,    0,    0,    0,    959,
    235,  4679, 0,    0,    0,    0,    1534, 4602, 0,    0,    2012, 4094, 0,    0,    0,    0,
    0,    1021, 0,    4868, 1419, 0,    2590, 1630, 0,    0,    1523, 1253, 761,  1105, 1737, 0,
    0,    0,    0,    0,    0,    438,  0,    0,    4717, 0,    4493, 1766, 0,    0,    0,    0,
    0,    0,    4923, 0,    1190, 0,    0,    0,    0,    0,    0,    0,    1127, 4967, 0,    3999,
    0,    0,    0,    0,    0,    2178, 0,    0,    0,    3138, 1947, 0,    0,    0,    0,    0,
    0,    0,    2687, 0,    910,  851,  0,    0,    5041, 0,    0,    0,    0,    0,    0,    0,
    295,  2216, 1680, 0,    0,    0,    0,    0,    0,    533,  1264, 1084, 0,    0,    0,    0,
    0,    0,    0,    0,    1592, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    3919, 0,    0,    0,    0,    0,    0,    3918, 0,    1314, 0,    0,
    0,    0,    0,    0,    0,    0,    0,    4545, 136,  2906, 0,    2082, 3908, 0,    0,    126,
    0,    0,    0,    1055, 0,    0,    0,    0,    0,    0,    0,    334,  1154, 0,    0,    0,
    0,    0,    0,    0,    0,    0,    37,   0,    0,    0,    0,    4027, 0,    0,    0,    0,
    0,    0,    0,    0,    2891, 0,    0,    0,    1540, 1225, 0,    0,    0,    122,  0,    0,
    0,    0,    3866, 857,  1003, 4959, 0,    0,    347,  0,    1185, 0,    1323, 2918, 0,    3920,
    762,  0,    5089, 0,    0,    3236, 0,    4253, 4838, 2189, 0,    0,    0,    2312, 2824, 0,
    0,    893,  275,  1775, 595,  1509, 0,    3551, 1639, 4083, 290,  115,  0,    0,    2156, 0,
    0,    0,    0,    0,    0,    3752, 0,    0,    0,    0,    3262, 260,  0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    379,  4935, 0,
    1851, 4776, 0,    0,    4643, 294,  0,    0,    4578, 0,    3763, 1349, 605,  0,    1630, 0,
    0,    2044, 0,    5042, 1429, 0,    1679, 0,    0,    0,    0,    0,    0,    0,    0,    2003,
    0,    1315, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    523,  0,
    5059, 0,    0,    0,    0,    0,    0,    0,    105,  357,  0,    0,    920,  0,    2848, 0,
    2912, 4941, 0,    0,    578,  1170, 0,    64,   0,    0,    1291, 0,    0,    0,    908,  0,
    0,    0,    0,    0,    0,    0,    4024, 1845, 0,    2291, 0,    1876, 0,    1745, 1132, 0,
    0,    0,    0,    588,  0,    0,    0,    1404, 3350, 0,    0,    0,    0,    0,    4650, 0,
    0,    0,    0,    0,    0,    735,  1805, 0,    0,    0,    4180, 0,    0,    0,    3635, 0,
    0,    0,    1422, 0,    1882, 0,    0,    0,    233,  0,    0,    0,    0,    0,    167,  0,
    0,    0,    1525, 0,    1881, 428,  0,    0,    2315, 5057, 0,    0,    0,    3737, 0,    209,
    195,  0,    684,  1590, 0,    4127, 1049, 0,    0,    0,    0,    1246, 4585, 0,    0,    1478,
    0,    0,    1622, 0,    4898, 134,  0,    0,    0,    4573, 0,    0,    0,    0,    0,    3052,
    0,    0,    0,    0,    0,    1169, 4981, 0,    0,    2277, 3719, 0,    0,    0,    526,  212,
    0,    3673, 0,    0,    0,    4709, 0,    0,    530,  0,    0,    0,    0,    0,    0,    0,
    269,  0,    2226, 0,    606,  0,    0,    3583, 0,    0,    4042, 0,    0,    0,    0,    0,
    4014, 0,    0,    0,    0,    0,    825,  0,    0,    2952, 3782, 4842, 0,    0,    0,    0,
    0,    0,    0,    0,    0,    2537, 0,    0,    2524, 0,    2604, 0,    678,  0,    2045, 0,
    0,    1058, 0,    0,    4883, 2302, 0,    0,    2665, 0,    0,    1641, 1811, 4687, 1033, 0,
    0,    0,    511,  0,    0,    0,    0,    0,    0,    765,  0,    4156, 0,    1758, 0,    0,
    4987, 1642, 0,    0,    2761, 0,    0,    0,    0,    1289, 0,    2195, 3143, 0,    2384, 313,
    0,    0,    2989, 0,    0,    0,    1511, 1461, 0,    0,    2201, 0,    838,  0,    0,    0,
    0,    2349, 320,  3184, 0,    0,    0,    0,    922,  234,  0,    0,    4996, 0,    1626, 129,
    1462, 0,    203,  0,    1072, 0,    1597, 0,    0,    531,  0,    0,    3903, 0,    4587, 1156,
    0,    0,    0,    0,    0,    0,    1172, 0,    4621, 0,    0,    0,    0,    0,    0,    4545,
    0,    0,    0,    0,    1449, 1501, 1464, 0,    0,    4367, 0,    0,    1180, 2207, 0,    0,
    1149, 0,    3586, 0,    1301, 567,  0,    0,    0,    0,    0,    0,    0,    365,  0,    0,
    1311, 4729, 0,    0,    312,  0,    0,    0,    0,    0,    4283, 0,    1616, 0,    4708, 656,
    1761, 0,    0,    4898, 1480, 3168, 0,    1498, 0,    1864, 0,    0,    0,    4471, 0,    79,
    0,    1315, 627,  0,    0,    4163, 0,    534,  1307, 2121, 0,    0,    805,  1726, 0,    0,
    0,    0,    0,    0,    0,    3947, 0,    4636, 0,    0,    0,    0,    0,    4315, 376,  0,
    0,    0,    0,    0,    814,  4927, 4654, 4721, 0,    0,    2679, 453,  0,    256,  180,  0,
    0,    2352, 2528, 2534, 0,    1397, 0,    822,  0,    854,  0,    1328, 0,    0,    1946, 365,
    2246, 0,    699,  0,    0,    0,    1382, 0,    0,    0,    0,    0,    0,    2199, 690,  0,
    0,    0,    0,    1609, 0,    4896, 4405, 757,  0,    3653, 0,    0,    96,   0,    0,    1067,
    0,    0,    2451, 0,    0,    0,    0,    0,    0,    962,  0,    1320, 0,    79,   0,    0,
    0,    0,    0,    0,    0,    633,  1098, 1513, 0,    0,    0,    0,    0,    2977, 725,  99,
    952,  1757, 3515, 4653, 0,    1339, 0,    4605, 0,    0,    4466, 4266, 0,    1088, 4487, 0,
    0,    2713, 1730, 118,  0,    4590, 0,    0,    0,    0,    390,  0,    1267, 0,    0,    0,
    0,    1047, 0,    0,    0,    0,    0,    0,    0,    27,   1085, 0,    0,    0,    2294, 3386,
    0,    0,    0,    3829, 1335, 0,    0,    0,    0,    0,    0,    4604, 0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    4759, 1485, 2075, 0,    4615, 0,    0,    4393, 4663, 2297, 0,    4400, 767,  0,    2644,
    0,    0,    0,    369,  1878, 0,    4297, 1424, 2783, 0,    0,    1993, 0,    0,    1089, 0,
    1366, 0,    117,  2074, 917,  0,    0,    0,    1058, 0,    0,    0,    260,  4469, 0,    739,
    791,  0,    0,    0,    623,  0,    2816, 0,    0,    624,  0,    148,  545,  0,    0,    0,
    0,    4436, 2667, 0,    1843, 0,    0,    0,    0,    0,    0,    0,    4940, 0,    0,    0,
    0,    0,    0,    284,  0,    0,    704,  811,  0,    0,    1213, 0,    0,    0,    0,    897,
    0,    2283, 3155, 162,  0,    4361, 0,    0,    0,    1152, 1349, 779,  3600, 900,  1454, 2107,
    885,  0,    0,    0,    0,    0,    0,    0,    0,    0,    1238, 1270, 1690, 4678, 2145, 0,
    0,    0,    0,    802,  0,    0,    101,  4842, 0,    0,    0,    0,    2201, 578,  0,    988,
    236,  3189, 0,    0,    445,  182,  670,  3851, 0,    0,    0,    0,    0,    0,    0,    3236,
    5074, 0,    0,    0,    0,    0,    1748, 1691, 0,    0,    4213, 892,  0,    2152, 0,    158,
    0,    0,    0,    1681, 0,    4552, 0,    0,    0,    0,    0,    0,    0,    0,    1720, 0,
    0,    0,    0,    262,  0,    1502, 0,    0,    3731, 0,    2303, 0,    0,    0,    0,    868,
    0,    0,    0,    4839, 0,    2208, 3256, 382,  2642, 0,    0,    4064, 0,    165,  0,    0,
    0,    4688, 0,    0,    361,  0,    70,   4819, 4711, 0,    0,    0,    1154, 2660, 4482, 296,
    75,   4445, 0,    4697, 0,    257,  0,    0,    0,    530,  0,    755,  0,    2177, 0,    0,
    0,    0,    0,    4826, 4496, 0,    0,    0,    0,    589,  0,    0,    1269, 0,    0,    0,
    0,    0,    0,    0,    2255, 0,    1757, 0,    1029, 0,    0,    3256, 0,    0,    0,    0,
    1774, 0,    0,    690,  0,    0,    0,    723,  0,    0,    0,    517,  3904, 680,  656,  0,
    0,    0,    0,    0,    0,    0,    1037, 0,    0,    751,  0,    0,    0,    0,    873,  1033,
    4598, 0,    4586, 0,    3060, 59,   2835, 3530, 1595, 0,    1586, 0,    266,  2212, 63,   3124,
    0,    0,    0,    3298, 0,    0,    0,    0,    0,    4240, 1827, 0,    0,    0,    1413, 1656,
    93,   2169, 0,    2523, 1579, 0,    0,    2609, 0,    2027, 2390, 0,    0,    2496, 0,    0,
    1074, 72,   864,  0,    0,    0,    0,    1743, 1282, 0,    0,    0,    0,    527,  0,    0,
    0,    117,  0,    2286, 876,  0,    0,    0,    0,    4093, 0,    0,    0,    3956, 0,    1941,
    0,    0,    0,    322,  556,  3519, 1986, 0,    0,    0,    0,    0,    1011, 2053, 0,    0,
    1253, 0,    0,    1921, 558,  0,    1399, 219,  1850, 0,    2126, 3638, 0,    0,    0,    0,
    0,    0,    676,  1290, 289,  115,  198,  0,    67,   3869, 4497, 0,    0,    3958, 0,    0,
    1815, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    291,  0,
    0,    0,    0,    0,    0,    0,    645,  936,  4793, 1926, 0,    0,    0,    0,    1339, 0,
    4922, 3430, 3614, 212,  667,  0,    0,    0,    1565, 0,    4660, 0,    979,  4016, 795,  0,
    1412, 0,    0,    0,    0,    1347, 464,  396,  0,    0,    3899, 0,    0,    7,    0,    0,
    0,    4130, 4123, 159,  0,    4810, 0,    0,    416,  2236, 0,    0,    1028, 0,    0,    0,
    35,   0,    1919, 0,    1009, 0,    464,  1128, 333,  0,    1507, 220,  0,    0,    0,    1771,
    0,    2131, 0,    3755, 1460, 1970, 0,    0,    0,    0,    0,    0,    0,    1884, 2926, 1103,
    0,    0,    0,    2875, 0,    0,    0,    2521, 2079, 600,  0,    110,  0,    0,    1639, 0,
    2739, 3722, 2248, 0,    879,  0,    1145, 0,    1415, 0,    0,    963,  0,    0,    0,    0,
    0,    0,    647,  0,    4350, 700,  507,  0,    1638, 0,    5023, 0,    0,    0,    0,    0,
    0,    0,    0,    0,    586,  0,    1310, 2572, 0,    0,    0,    0,    597,  0,    832,  0,
    423,  4698, 1782, 1501, 0,    0,    1157, 0,    0,    0,    0,    0,    0,    789,  878,  0,
    0,    2293, 0,    0,    231,  942,  2499, 474,  3392, 0,    0,    2319, 0,    2968, 0,    0,
    370,  0,    0,    0,    2885, 3363, 2689, 0,    1830, 0,    0,    5032, 0,    0,    0,    0,
    3127, 0,    290,  0,    2089, 0,    0,    1268, 0,    0,    0,    0,    0,    279,  2178, 0,
    0,    0,    0,    4327, 1278, 1706, 3,    1715, 339,  4666, 1136, 0,    732,  4523, 1047, 216,
    0,    1391, 0,    4410, 0,    0,    4112, 4526, 1385, 0,    158,  86,   3927, 1661, 969,  0,
    1623, 0,    1774, 0,    0,    0,    0,    0,    0,    0,    1366, 0,    0,    0,    377,  657,
    1242, 0,    1518, 0,    2715, 0,    0,    0,    0,    0,    1421, 748,  0,    0,    0,    119,
    4053, 2861, 0,    0,    958,  0,    0,    1734, 1999, 10,   4095, 0,    0,    0,    0,    0,
    3601, 261,  1081, 3018, 4431, 0,    3687, 0,    463,  0,    0,    0,    0,    211,  0,    0,
    0,    1186, 2768, 1220, 0,    0,    0,    0,    0,    641,  3580, 0,    543,  182,  0,    0,
    0,    0,    1931, 735,  293,  1423, 1714, 2306, 1747, 0,    2478, 4798, 0,    0,    0,    0,
    3002, 0,    2167, 0,    0,    0,    0,    642,  662,  1170, 4000, 0,    296,  0,    4830, 1879,
    826,  0,    0,    0,    1489, 0,    3835, 0,    394,  2059, 0,    0,    0,    178,  0,    0,
    0,    3591, 2056, 2815, 0,    0,    0,    0,    1268, 0,    0,    0,    0,    3932, 176,  0,
    47,   196,  0,    0,    0,    308,  929,  0,    4913, 997,  1166, 1063, 0,    2318, 87,   0,
    0,    3559, 0,    571,  2099, 716,  921,  0,    0,    0,    1633, 1642, 0,    761,  211,  0,
    2015, 0,    1998, 3960, 0,    0,    0,    0,    459,  4419, 4463, 0,    5038, 3072, 0,    0,
    0,    976,  1497, 5071, 1022, 0,    1740, 284,  515,  0,    1556, 0,    0,    1735, 605,  0,
    1420, 0,    0,    0,    2039, 95,   1637, 195,  1862, 1375, 1142, 0,    0,    0,    0,    4550,
    0,    0,    0,    0,    2501, 657,  3003, 0,    0,    0,    0,    1985, 749,  0,    0,    0,
    1174, 1078, 692,  0,    75,   1129, 979,  0,    0,    0,    2110, 0,    0,    972,  2374, 534,
    0,    0,    0,    1660, 0,    234,  1402, 1227, 0,    0,    362,  0,    0,    1468, 275,  1168,
    0,    4701, 0,    0,    0,    0,    4903, 2139, 1404, 0,    0,    405,  0,    1156, 0,    0,
    0,    0,    336,  3043, 0,    0,    0,    0,    0,    1281, 264,  4375, 3148, 0,    2265, 447,
    0,    2321, 0,    4928, 4437, 352,  0,    0,    0,    0,    2143, 0,    2490, 0,    0,    0,
    0,    2083, 0,    0,    398,  484,  1027, 1821, 0,    0,    2180, 948,  0,    0,    215,  2902,
    0,    0,    0,    0,    475,  1286, 1766, 0,    989,  408,  1409, 0,    5020, 1042, 115,  0,
    0,    1532, 675,  455,  1994, 0,    1380, 0,    3976, 0,    2734, 0,    4745, 0,    96,   0,
    132,  617,  0,    0,    0,    1837, 401,  1112, 3942, 4986, 4593, 2055, 498,  1499, 4045, 0,
    0,    5046, 327,  0,    0,    292,  0,    2055, 0,    2336, 0,    0,    0,    4697, 1519, 2176,
    0,    2054, 0,    0,    0,    878,  0,    0,    4365, 0,    0,    0,    0,    4590, 373,  3773,
    1049, 0,    3695, 4019, 0,    0,    599,  0,    0,    0,    197,  0,    692,  0,    130,  0,
    178,  0,    0,    0,    1106, 0,    1851, 0,    975,  261,  710,  1112, 3723, 1196, 1422, 510,
    0,    3643, 3929, 0,    3965, 1343, 3381, 0,    0,    1413, 1206, 589,  0,    0,    0,    3972,
    1265, 1330, 157,  0,    1763, 877,  3213, 737,  0,    0,    0,    0,    1473, 0,    3071, 0,
    1102, 3205, 2962, 1754, 0,    0,    0,    0,    0,    0,    0,    907,  0,    0,    3996, 0,
    0,    3345, 0,    0,    0,    0,    25,   4591, 0,    0,    2573, 0,    0,    628,  4843, 472,
    441,  216,  961,  3104, 748,  4360, 0,    0,    0,    0,    0,    0,    0,    939,  415,  2886,
    4143, 168,  881,  0,    874,  0,    873,  0,    4043, 0,    0,    600,  0,    4814, 0,    0,
    1315, 1191, 0,    0,    0,    0,    2391, 0,    0,    1515, 4740, 0,    0,    0,    0,    2026,
    0,    301,  3904, 0,    1732, 831,  0,    0,    0,    627,  39,   0,    0,    2689, 591,  853,
    0,    4747, 0,    0,    0,    4900, 415,  0,    0,    532,  1484, 0,    4651, 567,  3660, 0,
    0,    163,  0,    2362, 0,    3781, 24,   0,    0,    2006, 0,    0,    0,    1587, 2951, 0,
    0,    2057, 0,    0,    2238, 0,    4944, 1703, 0,    2475, 4900, 33,   976,  4866, 0,    0,
    0,    1740, 773,  3391, 0,    0,    3826, 705,  0,    0,    0,    1971, 2,    1912, 0,    0,
    0,    0,    1727, 0,    328,  0,    0,    1617, 0,    0,    823,  4792, 5030, 2050, 0,    707,
    0,    0,    0,    3511, 0,    0,    0,    0,    2100, 0,    18,   1810, 928,  2269, 0,    0,
    3245, 0,    0,    2197, 1572, 0,    0,    0,    0,    1143, 0,    0,    2200, 1564, 531,  1429,
    0,    5022, 0,    4544, 0,    0,    413,  0,    0,    0,    0,    0,    0,    0,    0,    0,
    918,  865,  0,    1857, 1476, 1721, 2331, 1537, 194,  0,    1730, 1299, 4135, 1799, 364,  733,
    780,  0,    1696, 1722, 5032, 0,    0,    719,  0,    0,    1676, 0,    1789, 0,    0,    0,
    0,    4900, 0,    0,    4812, 1462, 2223, 0,    0,    0,    0,    37,   0,    0,    0,    1338,
    0,    0,    576,  0,    1342, 0,    0,    0,    853,  4376, 0,    4452, 4034, 4375, 1017, 0,
    0,    4862, 1957, 3924, 375,  1158, 1086, 1989, 0,    3487, 0,    1993, 0,    608,  0,    365,
    4583, 2187, 1176, 0,    0,    0,    0,    494,  0,    2241, 0,    0,    0,    0,    4076, 11,
    0,    4541, 58,   912,  1440, 1503, 1435, 0,    1245, 614,  3526, 0,    0,    0,    1812, 0,
    0,    1166, 1632, 0,    5016, 1108, 0,    1152, 14,   0,    0,    1704, 0,    1403, 0,    338,
    3819, 4322, 3707, 38,   0,    934,  1992, 0,    0,    2232, 1464, 1845, 0,    1977, 0,    782,
    0,    0,    0,    0,    845,  0,    2085, 860,  621,  0,    4891, 0,    0,    1941, 0,    0,
    0,    831,  0,    0,    0,    0,    966,  0,    0,    1622, 0,    0,    0,    0,    0,    0,
    2280, 0,    642,  3111, 0,    0,    0,    0,    0,    0,    0,    0,    3266, 820,  3458, 0,
    0,    0,    2173, 2140, 258,  354,  2123, 66,   71,   0,    1525, 0,    0,    0,    0,    2253,
    0,    0,    202,  0,    0,    0,    1522, 0,    4362, 0,    1242, 0,    0,    0,    665,  0,
    0,    519,  0,    0,    4666, 0,    0,    0,    2208, 0,    5057, 2081, 621,  0,    0,    0,
    3354, 0,    1991, 599,  0,    2852, 0,    0,    0,    0,    0,    0,    0,    4568, 1567, 0,
    0,    35,   491,  2164, 0,    0,    0,    0,    0,    1495, 0,    4721, 4494, 0,    222,  1801,
    3465, 0,    4420, 0,    0,    3638, 790,  684,  0,    750,  3350, 4442, 0,    1042, 0,    0,
    3915, 134,  2284, 955,  3025, 0,    0,    0,    0,    2255, 1951, 1444, 0,    937,  3399, 4603,
    1526, 0,    4562, 2213, 2263, 0,    0,    606,  1937, 0,    1145, 925,  0,    1174, 340,  2140,
    0,    0,    1179, 2457, 0,    985,  0,    4697, 0,    0,    3173, 664,  984,  618,  0,    0,
    4727, 1266, 0,    0,    0,    4101, 2289, 4742, 1116, 0,    4671, 0,    657,  4131, 0,    0,
    763,  1731, 2963, 0,    4663, 169,  756,  1454, 1694, 1053, 1986, 0,    3583, 284,  992,  2934,
    97,   0,    1968, 0,    2623, 4668, 3960, 0,    1654, 1273, 2516, 3052, 0,    1320, 4423, 0,
    0,    0,    0,    1709, 1492, 4834, 544,  0,    0,    0,    4787, 0,    262,  0,    454,  1063,
    3317, 393,  0,    0,    839,  0,    0,    0,    1779, 0,    0,    0,    553,  3933, 0,    0,
    0,    1437, 0,    0,    0,    921,  0,    0,    4619, 0,    2524, 0,    0,    0,    0,    711,
    0,    1050, 0,    0,    421,  0,    0,    895,  5063, 0,    0,    402,  0,    1193, 0,    2314,
    1263, 1777, 0,    5089, 0,    223,  2430, 0,    875,  0,    1384, 0,    3722, 4574, 4280, 0,
    0,    2343, 0,    1438, 0,    3369, 0,    0,    0,    141,  687,  0,    625,  3039, 1737, 0,
    0,    3141, 288,  4121, 0,    116,  376,  3061, 2296, 0,    1580, 793,  145,  0,    0,    0,
    1548, 4738, 0,    1400, 0,    1276, 0,    1528, 5006, 0,    2317, 2043, 4500, 4905, 0,    0,
    0,    0,    0,    2666, 2345, 0,    460,  1777, 684,  1054, 0,    1161, 4738, 0,    4655, 0,
    4867, 5007, 211,  285,  0,    3769, 502,  0,    4891, 0,    3337, 1454, 1729, 557,  0,    0,
    1445, 430,  1829, 103,  0,    0,    0,    0,    1887, 0,    1254, 0,    0,    1543, 0,    404,
    0,    4759, 0,    3950, 152,  422,  0,    0,    4855, 221,  4852, 5060, 419,  1281, 658,  4101,
    0,    5010, 0,    1011, 0,    143,  1210, 4725, 0,    3742, 1141, 0,    0,    0,    2000, 1218,
    0,    0,    4917, 4855, 3545, 191,  1006, 1561, 1085, 2623, 2694, 0,    0,    2040, 1319, 5012,
    0,    4691, 0,    0,    229,  1083, 168,  3386, 3675, 0,    2101, 0,    0,    454,  2282, 2179,
    0,    0,    4680, 1577, 0,    3012, 0,    0,    1978, 1783, 236,  0,    2229, 0,    0,    2320,
    0,    0,    0,    0,    1267, 2193, 0,    1553, 0,    4700, 1494, 0,    0,    0,    0,    0,
    63,   784,  2218, 0,    0,    1437, 0,    1699, 0,    1559, 0,    812,  0,    1996, 1995, 126,
    0,    1841, 0,    0,    0,    1889, 0,    720,  139,  3614, 5005, 0,    1370, 727,  1360, 4116,
    893,  1044, 351,  491,  4795, 0,    0,    3566, 0,    199,  0,    0,    4423, 1286, 0,    4260,
    1350, 0,    0,    495,  1488, 1655, 0,    608,  0,    0,    146,  0,    1131, 0,    725,  4827,
    0,    3222, 161,  0,    0,    510,  307,  319,  481,  0,    0,    0,    3016, 502,  402,  112,
    0,    1960, 0,    0,    0,    5046, 4263, 210,  0,    0,    1434, 3677, 75,   0,    3689, 449,
    0,    4803, 0,    0,    0,    0,    1623, 0,    0,    991,  2005, 1484, 417,  736,  4435, 0,
    0,    0,    2076, 0,    0,    1041, 2622, 0,    96,   0,    0,    0,    4618, 0,    0,    2335,
    0,    3751, 1408, 5002, 465,  27,   0,    0,    0,    0,    871,  0,    0,    7,    5006, 0,
    39,   0,    383,  0,    3316, 2288, 0,    0,    0,    1332, 0,    0,    0,    2089, 0,    3981,
    0,    980,  540,  2200, 0,    812,  644,  4281, 1788, 4740, 160,  942,  1600, 0,    1485, 2473,
    0,    395,  516,  103,  0,    1528, 2029, 2094, 681,  3331, 1102, 821,  994,  1315, 823,  2010,
    1563, 1323, 1535, 0,    2298, 1573, 0,    0,    553,  621,  1096, 0,    3085, 4752, 693,  0,
    1151, 2075, 1229, 1786, 0,    0,    1025, 1688, 4674, 5036, 0,    525,  341,  1247, 0,    0,
    0,    2901, 698,  2072, 0,    0,    0,    2325, 0,    944,  4064, 1104, 0,    0,    0,    650,
    0,    1324, 0,    649,  1644, 1016, 1535, 0,    468,  5082, 4451, 3644, 2935, 0,    4321, 0,
    0,    2128, 0,    995,  1084, 144,  0,    0,    0,    3993, 4158, 1843, 0,    2253, 993,  697,
    1367, 1349, 4452, 0,    0,    1008, 3459, 0,    1704, 0,    0,    548,  0,    3732, 854,  1519,
    0,    287,  0,    1566, 373,  0,    432,  709,  661,  0,    0,    106,  0,    3599, 51,   0,
    2118, 0,    302,  0,    633,  0,    3749, 2332, 0,    0,    0,    0,    4980, 1785, 1382, 189,
    1842, 4122, 1861, 0,    1952, 491,  0,    1730, 0,    0,    4656, 194,  1917, 2358, 0,    4537,
    448,  0,    0,    4903, 4438, 0,    0,    2558, 0,    1803, 0,    0,    1954, 3484, 0,    0,
    750,  967,  608,  0,    3442, 0,    0,    949,  3542, 1257, 837,  4187, 2153, 52,   0,    0,
    0,    0,    0,    2132, 1082, 3915, 0,    2884, 97,   0,    0,    2783, 2931, 304,  577,  0,
    0,    1074, 2052, 873,  0,    1619, 3362, 0,    592,  0,    0,    2562, 446,  3929, 0,    0,
    606,  394,  4774, 761,  974,  0,    3529, 0,    180,  4732, 0,    2056, 3255, 1687, 544,  1863,
    1359, 3946, 2186, 0,    0,    0,    0,    0,    0,    3024, 1127, 4895, 470,  315,  0,    0,
    2865, 0,    98,   0,    0,    1747, 324,  0,    781,  2095, 0,    0,    0,    0,    488,  0,
    0,    162,  407,  3144, 2194, 0,    863,  0,    0,    693,  3953, 0,    0,    0,    0,    3389,
    2736, 5001, 923,  115,  0,    0,    0,    2049, 4447, 978,  140,  0,    1163, 0,    0,    1780,
    0,    335,  0,    1443, 4253, 3000, 237,  270,  1171, 751,  0,    544,  1448, 1916, 3985, 1593,
    1329, 2332, 672,  1101, 5023, 407,  1793, 0,    1778, 1683, 4403, 0,    1393, 0,    0,    5062,
    1279, 1696, 4218, 0,    3989, 0,    4257, 0,    4230, 0,    2312, 1928, 0,    0,    0,    2962,
    0,    0,    3996, 271,  0,    0,    0,    0,    0,    0,    527,  1544, 0,    23,   0,    4577,
    663,  332,  1615, 0,    0,    1419, 0,    0,    550,  1618, 1570, 0,    529,  3817, 0,    0,
    4677, 1305, 3477, 125,  0,    2206, 5045, 459,  1700, 0,    0,    875,  430,  1238, 192,  2901,
    1995, 563,  0,    0,    727,  4313, 1244, 0,    561,  0,    3651, 0,    0,    0,    1249, 0,
    0,    0,    0,    5002, 4660, 0,    3220, 897,  2285, 617,  4625, 0,    1218, 3826, 412,  0,
    0,    792,  0,    0,    4304, 351,  0,    2803, 0,    0,    1045, 0,    218,  1243, 0,    0,
    4323, 0,    3484, 2117, 0,    0,    0,    0,    855,  1235, 1834, 4054, 0,    426,  1498, 796,
    55,   0,    421,  0,    4966, 2921, 777,  0,    3751, 1902, 3999, 0,    0,    0,    1564, 0,
    389,  1322, 3425, 1207, 0,    0,    270,  2256, 0,    0,    1106, 0,    198,  923,  1896, 0,
    0,    1034, 2313, 2270, 4432, 905,  1447, 3141, 0,    0,    1773, 0,    0,    0,    1558, 372,
    249,  0,    2138, 0,    5075, 620,  0,    0,    1,    4410, 4630, 0,    542,  398,  0,    0,
    4677, 735,  0,    15,   0,    1551, 390,  0,    0,    3914, 877,  392,  1166, 3572, 0,    0,
    1041, 121,  4063, 1693, 0,    1542, 1067, 0,    1873, 612,  0,    0,    1439, 0,    1330, 0,
    3746, 1272, 4399, 1223, 2216, 2080, 1482, 0,    2070, 0,    1634, 812,  0,    20,   4942, 5022,
    1155, 4246, 1075, 1271, 1094, 0,    1628, 1918, 4913, 413,  0,    0,    0,    4958, 0,    1461,
    273,  4628, 3261, 411,  0,    0,    2882, 3801, 535,  3565, 429,  0,    3998, 4260, 4769, 741,
    626,  4061, 2104, 0,    667,  0,    1171, 3024, 632,  1160, 0,    796,  0,    513,  1812, 1328,
    1506, 3742, 0,    180,  2298, 1657, 1870, 0,    572,  0,    0,    1752, 0,    0,    906,  179,
    584,  0,    0,    0,    0,    0,    1574, 0,    2388, 0,    575,  1868, 2891, 0,    162,  2590,
    231,  0,    0,    0,    0,    0,    1552, 0,    2660, 3575, 3598, 0,    482,  1373, 2570, 1191,
    0,    916,  1202, 2144, 1821, 0,    1608, 1652, 3630, 0,    0,    0,    0,    0,    0,    4120,
    107,  0,    0,    0,    0,    489,  4743, 0,    0,    0,    1200, 1122, 0,    914,  4183, 3414,
    582,  4040, 646,  0,    45,   0,    0,    0,    0,    2067, 0,    1625, 1147, 452,  1296, 0,
    0,    10,   1055, 932,  2032, 849,  866,  0,    2008, 4718, 2227, 1764, 0,    541,  1802, 50,
    0,    214,  0,    450,  177,  731,  0,    1132, 809,  0,    0,    1684, 1094, 0,    667,  1012,
    0,    0,    4697, 0,    0,    0,    0,    764,  0,    0,    2204, 707,  4872, 0,    0,    0,
    0,    917,  598,  353,  354,  0,    2064, 0,    5070, 1411, 4843, 1181, 0,    53,   2239, 0,
    2244, 986,  0,    0,    0,    242,  1372, 467,  0,    2190, 4634, 339,  0,    0,    0,    4724,
    0,    130,  3878, 914,  0,    0,    1733, 4886, 0,    118,  457,  0,    0,    1625, 0,    4495,
    0,    5071, 2927, 2114, 0,    749,  0,    989,  2322, 606,  0,    1195, 1188, 3304, 0,    3216,
    137,  0,    4943, 0,    0,    2632, 4973, 310,  2464, 1967, 4015, 872,  4960, 0,    0,    0,
    518,  0,    77,   0,    607,  0,    434,  0,    1516, 4172, 1709, 1248, 0,    165,  1668, 219,
    1458, 1340, 1367, 0,    0,    0,    2324, 2812, 0,    0,    2654, 444,  1800, 1678, 0,    872,
    0,    4484, 1983, 894,  4464, 1352, 1683, 367,  2163, 0,    0,    64,   0,    4907, 1427, 876,
    459,  0,    776,  0,    0,    3454, 0,    1277, 0,    2211, 84,   0,    560,  724,  0,    414,
    0,    1711, 839,  3090, 3940, 4508, 0,    843,  1302, 0,    0,    500,  0,    0,    2482, 1020,
    0,    951,  1872, 546,  4092, 2249, 0,    0,    0,    5032, 0,    104,  1004, 0,    425,  982,
    0,    501,  764,  57,   0,    1621, 4707, 0,    0,    1791, 0,    1346, 2213, 0,    1899, 0,
    981,  1141, 0,    0,    0,    122,  1369, 0,    1432, 0,    1310, 4756, 0,    0,    4984, 0,
    0,    212,  0,    2115, 0,    0,    2209, 2588, 0,    0,    925,  0,    399,  0,    4015, 0,
    0,    0,    1881, 0,    0,    1184, 1728, 431,  344,  2010, 1272, 4460, 0,    1932, 1452, 1031,
    147,  0,    0,    3026, 0,    4481, 2608, 0,    0,    0,    581,  0,    2032, 4242, 817,  0,
    0,    0,    2021, 547,  0,    1192, 2482, 4942, 0,    0,    0,    0,    1177, 978,  575,  113,
    2261, 1409, 0,    1601, 4523, 902,  0,    4722, 1988, 0,    159,  2194, 1389, 469,  3603, 4822,
    1192, 0,    0,    1780, 852,  2453, 1504, 0,    0,    676,  0,    0,    1285, 9,    0,    0,
    764,  767,  0,    0,    0,    200,  0,    622,  2312, 0,    0,    1502, 806,  1973, 108,  2840,
    1127, 876,  0,    994,  0,    0,    4584, 718,  985,  1129, 319,  0,    2603, 505,  0,    0,
    0,    1315, 0,    3926, 830,  0,    1873, 0,    2575, 0,    0,    0,    2250, 0,    0,    0,
    4006, 1033, 480,  0,    1287, 0,    4706, 975,  0,    987,  4732, 4444, 0,    0,    565,  2262,
    0,    0,    2171, 1119, 0,    2965, 961,  1800, 1438, 761,  3925, 2162, 1896, 4609, 0,    0,
    0,    811,  0,    0,    0,    0,    0,    641,  0,    3378, 1623, 0,    0,    0,    0,    1530,
    0,    939,  1986, 0,    0,    1138, 1718, 1658, 2274, 1413, 1149, 721,  40,   0,    0,    940,
    68,   4284, 0,    0,    1259, 2161, 809,  4730, 874,  271,  4942, 1360, 0,    1053, 0,    307,
    1511, 0,    2124, 0,    0,    0,    0,    1352, 0,    1182, 164,  1598, 122,  0,    4716, 0,
    0,    0,    3850, 0,    0,    4923, 1615, 2264, 1875, 3993, 17,   0,    2183, 2937, 1861, 205,
    4060, 4955, 913,  0,    2843, 0,    331,  4891, 0,    3931, 40,   2125, 4489, 770,  0,    1939,
    210,  4756, 51,   1648, 2214, 0,    745,  0,    1535, 1253, 1141, 0,    0,    0,    0,    231,
    1645, 0,    175,  2081, 0,    0,    0,    0,    930,  0,    2274, 137,  965,  2323, 0,    0,
    5083, 0,    2061, 1705, 0,    600,  0,    0,    0,    3063, 1490, 455,  0,    0,    0,    2233,
    876,  1125, 1362, 0,    256,  0,    4001, 0,    0,    279,  0,    0,    0,    0,    0,    4728,
    4743, 1287, 0,    1799, 4349, 0,    0,    0,    4207, 59,   265,  2495, 924,  3104, 2276, 1205,
    0,    4503, 0,    0,    0,    0,    0,    0,    0,    4229, 0,    0,    1583, 0,    0,    18,
    0,    1929, 1301, 1097, 0,    1282, 170,  0,    0,    1975, 973,  1548, 0,    1843, 727,  2126,
    0,    0,    0,    4132, 0,    774,  92};

int HashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 5095;
    }
    return kG[sum];
}

int PerfectHash(const char *key)
{
    if (strlen(key) > 37)
        return 0;

    return (HashG(key, kT1) + HashG(key, kT2)) % 5095;
}

}  // namespace

namespace sh
{

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvPrime = 16777619u;

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvOffsetBasis = 0x811c9dc5u;

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvPrime =
    static_cast<size_t>(1099511628211ull);

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvOffsetBasis =
    static_cast<size_t>(0xcbf29ce484222325ull);

uint32_t ImmutableString::mangledNameHash() const
{
    return PerfectHash(data());
}

}  // namespace sh
