T(RN,          0x0p+0,           0, 0)
T(RN,         -0x0p+0,           0, 0)
T(RN,          0x1p-1,           1, INEXACT)
T(RN,         -0x1p-1,          -1, INEXACT)
T(RN,          0x1p+0,           1, 0)
T(RN,         -0x1p+0,          -1, 0)
T(RN,     0x1.0001p+0,           1, INEXACT)
T(RN,    -0x1.0001p+0,          -1, INEXACT)
T(RN,     0x1.ffffp-1,           1, INEXACT)
T(RN,    -0x1.ffffp-1,          -1, INEXACT)
T(RN,        0x1p-100,           0, INEXACT)
T(RN,       -0x1p-100,           0, INEXACT)
// TODO: return value is unspecified
T(RN,                     nan, -2147483648, INVALID)
T(RN,                     inf, -2147483648, INVALID)
T(RN,                    -inf, -2147483648, INVALID)
T(RN,                0x1p+100, -2147483648, INVALID)
T(RN,               -0x1p+100, -2147483648, INVALID)
