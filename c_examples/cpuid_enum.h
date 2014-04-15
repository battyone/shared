/**
 * This file is automatically generated from kernel-x86-cpufeature.h.
 * DO NOT EDIT THIS FILE DIRECTLY.
 *
 * NB: designated initializers are a C99 feature so use __extension__ to be
 *   able to compile with -pendantic.
 */

#ifndef CPUID_ENUM_H
#define CPUID_ENUM_H

/**
 * cpuid 0x00000001, edx register
 */
__extension__ static const char* const cpuidstr_1_edx[32] = {
    [0] = "fpu",
    [1] = "vme",
    [2] = "de",
    [3] = "pse",
    [4] = "tsc",
    [5] = "msr",
    [6] = "pae",
    [7] = "mce",
    [8] = "cx8",
    [9] = "apic",
    [11] = "sep",
    [12] = "mtrr",
    [13] = "pge",
    [14] = "mca",
    [15] = "cmov",
    [16] = "pat",
    [17] = "pse36",
    [18] = "pn",
    [19] = "clflush",
    [21] = "dts",
    [22] = "acpi",
    [23] = "mmx",
    [24] = "fxsr",
    [25] = "sse",
    [26] = "sse2",
    [27] = "selfsnoop",
    [28] = "ht",
    [29] = "acc",
    [30] = "ia64",
    [31] = "pbe",
};

/**
 * cpuid 0x00000001, ecx register
 */
__extension__ static const char* const cpuidstr_1_ecx[32] = {
    [0] = "sse3",
    [1] = "pclmulqdq",
    [2] = "dtes64",
    [3] = "mwait",
    [4] = "dscpl",
    [5] = "vmx",
    [6] = "smx",
    [7] = "est",
    [8] = "tm2",
    [9] = "ssse3",
    [10] = "cid",
    [12] = "fma",
    [13] = "cx16",
    [14] = "xtpr",
    [15] = "pdcm",
    [17] = "pcid",
    [18] = "dca",
    [19] = "sse4_1",
    [20] = "sse4_2",
    [21] = "x2apic",
    [22] = "movbe",
    [23] = "popcnt",
    [24] = "tsc_deadline_timer",
    [25] = "aes",
    [26] = "xsave",
    [27] = "osxsave",
    [28] = "avx",
    [29] = "f16c",
    [30] = "rdrand",
    [31] = "hypervisor",
};

/**
 * cpuid 0x00000007:0, ebx register
 */
__extension__ static const char* const cpuidstr_7_ebx[32] = {
    [0] = "fsgsbase",
    [1] = "tsc_adjust",
    [3] = "bmi1",
    [4] = "hle",
    [5] = "avx2",
    [7] = "smep",
    [8] = "bmi2",
    [9] = "erms",
    [10] = "invpcid",
    [11] = "rtm",
    [14] = "mpx",
    [16] = "avx512f",
    [18] = "rdseed",
    [19] = "adx",
    [20] = "smap",
    [23] = "clflushopt",
    [26] = "avx512pf",
    [27] = "avx512er",
    [28] = "avx512cd",
};

/**
 * cpuid 0x80000001, edx register
 */
__extension__ static const char* const cpuidstr_ext1_edx[32] = {
    [11] = "syscall",
    [19] = "mp",
    [20] = "nx",
    [22] = "mmxext",
    [25] = "fxsr_opt",
    [26] = "gbpages",
    [27] = "rdtscp",
    [29] = "lm",
    [30] = "3dnowext",
    [31] = "3dnow",
};

/**
 * cpuid 0x80000001, ecx register
 */
__extension__ static const char* const cpuidstr_ext1_ecx[32] = {
    [0] = "lahf_lm",
    [1] = "cmp_legacy",
    [2] = "svm",
    [3] = "extapic",
    [4] = "cr8_legacy",
    [5] = "abm",
    [6] = "sse4a",
    [7] = "misalignsse",
    [8] = "3dnowprefetch",
    [9] = "osvw",
    [10] = "ibs",
    [11] = "xop",
    [12] = "skinit",
    [13] = "wdt",
    [15] = "lwp",
    [16] = "fma4",
    [17] = "tce",
    [19] = "nodeid_msr",
    [21] = "tbm",
    [22] = "topoext",
    [23] = "perfctr_core",
    [24] = "perfctr_nb",
    [28] = "perfctr_l2",
};

#endif
