/*
 * ET199_32 系統初始化與配置模組
 * 行數範圍：1-2000
 */

typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
float16
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef uint sizetype;

typedef undefined __unknown__[32];

typedef uchar UQItype;

typedef uint hashval_t;

typedef undefined complex long double[24];

typedef qword complex float;

typedef undefined complex double[16];

typedef float16 __float128;

typedef hashval_t (*htab_hash)(void *);

typedef int (*htab_eq)(void *, void *);

typedef struct _iobuf _iobuf, *P_iobuf;

typedef struct _iobuf FILE;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef enum stringop_alg {
    no_stringop=0,
    libcall=1,
    rep_prefix_1_byte=2,
    rep_prefix_4_byte=3,
    rep_prefix_8_byte=4,
    loop_1_byte=5,
    loop=6,
    unrolled_loop=7,
    vector_loop=8,
    last_alg=9
} stringop_alg;

typedef struct stringop_algs stringop_algs, *Pstringop_algs;

typedef struct stringop_strategy stringop_strategy, *Pstringop_strategy;

struct stringop_strategy {
    int max;
    enum stringop_alg alg;
    int noalign;
};

struct stringop_algs {
    enum stringop_alg unknown_size;
    struct stringop_strategy size[4];
};

typedef enum processor_type {
    PROCESSOR_GENERIC=0,
    PROCESSOR_I386=1,
    PROCESSOR_I486=2,
    PROCESSOR_PENTIUM=3,
    PROCESSOR_LAKEMONT=4,
    PROCESSOR_PENTIUMPRO=5,
    PROCESSOR_PENTIUM4=6,
    PROCESSOR_NOCONA=7,
    PROCESSOR_CORE2=8,
    PROCESSOR_NEHALEM=9,
    PROCESSOR_SANDYBRIDGE=10,
    PROCESSOR_HASWELL=11,
    PROCESSOR_BONNELL=12,
    PROCESSOR_SILVERMONT=13,
    PROCESSOR_KNL=14,
    PROCESSOR_SKYLAKE_AVX512=15,
    PROCESSOR_INTEL=16,
    PROCESSOR_GEODE=17,
    PROCESSOR_K6=18,
    PROCESSOR_ATHLON=19,
    PROCESSOR_K8=20,
    PROCESSOR_AMDFAM10=21,
    PROCESSOR_BDVER1=22,
    PROCESSOR_BDVER2=23,
    PROCESSOR_BDVER3=24,
    PROCESSOR_BDVER4=25,
    PROCESSOR_BTVER1=26,
    PROCESSOR_BTVER2=27,
    PROCESSOR_ZNVER1=28,
    PROCESSOR_max=29
} processor_type;

typedef enum ix86_arch_indices {
    X86_ARCH_CMOV=0,
    X86_ARCH_CMPXCHG=1,
    X86_ARCH_CMPXCHG8B=2,
    X86_ARCH_XADD=3,
    X86_ARCH_BSWAP=4,
    X86_ARCH_LAST=5
} ix86_arch_indices;

typedef enum reg_class {
    NO_REGS=0,
    AREG=1,
    DREG=2,
    CREG=3,
    BREG=4,
    SIREG=5,
    DIREG=6,
    AD_REGS=7,
    CLOBBERED_REGS=8,
    Q_REGS=9,
    NON_Q_REGS=10,
    INDEX_REGS=11,
    LEGACY_REGS=12,
    GENERAL_REGS=13,
    FP_TOP_REG=14,
    FP_SECOND_REG=15,
    FLOAT_REGS=16,
    SSE_FIRST_REG=17,
    NO_REX_SSE_REGS=18,
    SSE_REGS=19,
    EVEX_SSE_REGS=20,
    BND_REGS=21,
    ALL_SSE_REGS=22,
    MMX_REGS=23,
    FP_TOP_SSE_REGS=24,
    FP_SECOND_SSE_REGS=25,
    FLOAT_SSE_REGS=26,
    FLOAT_INT_REGS=27,
    INT_SSE_REGS=28,
    FLOAT_INT_SSE_REGS=29,
    MASK_EVEX_REGS=30,
    MASK_REGS=31,
    ALL_REGS=32,
    LIM_REG_CLASSES=33
} reg_class;

typedef enum ix86_tune_indices {
    X86_TUNE_SCHEDULE=0,
    X86_TUNE_PARTIAL_REG_DEPENDENCY=1,
    X86_TUNE_SSE_PARTIAL_REG_DEPENDENCY=2,
    X86_TUNE_SSE_SPLIT_REGS=3,
    X86_TUNE_PARTIAL_FLAG_REG_STALL=4,
    X86_TUNE_MOVX=5,
    X86_TUNE_MEMORY_MISMATCH_STALL=6,
    X86_TUNE_FUSE_CMP_AND_BRANCH_32=7,
    X86_TUNE_FUSE_CMP_AND_BRANCH_64=8,
    X86_TUNE_FUSE_CMP_AND_BRANCH_SOFLAGS=9,
    X86_TUNE_FUSE_ALU_AND_BRANCH=10,
    X86_TUNE_REASSOC_INT_TO_PARALLEL=11,
    X86_TUNE_REASSOC_FP_TO_PARALLEL=12,
    X86_TUNE_ACCUMULATE_OUTGOING_ARGS=13,
    X86_TUNE_PROLOGUE_USING_MOVE=14,
    X86_TUNE_EPILOGUE_USING_MOVE=15,
    X86_TUNE_USE_LEAVE=16,
    X86_TUNE_PUSH_MEMORY=17,
    X86_TUNE_SINGLE_PUSH=18,
    X86_TUNE_DOUBLE_PUSH=19,
    X86_TUNE_SINGLE_POP=20,
    X86_TUNE_DOUBLE_POP=21,
    X86_TUNE_PAD_SHORT_FUNCTION=22,
    X86_TUNE_PAD_RETURNS=23,
    X86_TUNE_FOUR_JUMP_LIMIT=24,
    X86_TUNE_SOFTWARE_PREFETCHING_BENEFICIAL=25,
    X86_TUNE_LCP_STALL=26,
    X86_TUNE_READ_MODIFY=27,
    X86_TUNE_USE_INCDEC=28,
    X86_TUNE_INTEGER_DFMODE_MOVES=29,
    X86_TUNE_OPT_AGU=30,
    X86_TUNE_AVOID_LEA_FOR_ADDR=31,
    X86_TUNE_SLOW_IMUL_IMM32_MEM=32,
    X86_TUNE_SLOW_IMUL_IMM8=33,
    X86_TUNE_AVOID_MEM_OPND_FOR_CMOVE=34,
    X86_TUNE_SINGLE_STRINGOP=35,
    X86_TUNE_MISALIGNED_MOVE_STRING_PRO_EPILOGUES=36,
    X86_TUNE_USE_SAHF=37,
    X86_TUNE_USE_CLTD=38,
    X86_TUNE_USE_BT=39,
    X86_TUNE_USE_HIMODE_FIOP=40,
    X86_TUNE_USE_SIMODE_FIOP=41,
    X86_TUNE_USE_FFREEP=42,
    X86_TUNE_EXT_80387_CONSTANTS=43,
    X86_TUNE_VECTORIZE_DOUBLE=44,
    X86_TUNE_GENERAL_REGS_SSE_SPILL=45,
    X86_TUNE_SSE_UNALIGNED_LOAD_OPTIMAL=46,
    X86_TUNE_SSE_UNALIGNED_STORE_OPTIMAL=47,
    X86_TUNE_SSE_PACKED_SINGLE_INSN_OPTIMAL=48,
    X86_TUNE_SSE_TYPELESS_STORES=49,
    X86_TUNE_SSE_LOAD0_BY_PXOR=50,
    X86_TUNE_INTER_UNIT_MOVES_TO_VEC=51,
    X86_TUNE_INTER_UNIT_MOVES_FROM_VEC=52,
    X86_TUNE_INTER_UNIT_CONVERSIONS=53,
    X86_TUNE_SPLIT_MEM_OPND_FOR_FP_CONVERTS=54,
    X86_TUNE_USE_VECTOR_FP_CONVERTS=55,
    X86_TUNE_USE_VECTOR_CONVERTS=56,
    X86_TUNE_SLOW_PSHUFB=57,
    X86_TUNE_VECTOR_PARALLEL_EXECUTION=58,
    X86_TUNE_AVOID_4BYTE_PREFIXES=59,
    X86_TUNE_AVX256_UNALIGNED_LOAD_OPTIMAL=60,
    X86_TUNE_AVX256_UNALIGNED_STORE_OPTIMAL=61,
    X86_TUNE_AVX128_OPTIMAL=62,
    X86_TUNE_DOUBLE_WITH_ADD=63,
    X86_TUNE_ALWAYS_FANCY_MATH_387=64,
    X86_TUNE_UNROLL_STRLEN=65,
    X86_TUNE_SHIFT1=66,
    X86_TUNE_ZERO_EXTEND_WITH_AND=67,
    X86_TUNE_PROMOTE_HIMODE_IMUL=68,
    X86_TUNE_FAST_PREFIX=69,
    X86_TUNE_READ_MODIFY_WRITE=70,
    X86_TUNE_MOVE_M1_VIA_OR=71,
    X86_TUNE_NOT_UNPAIRABLE=72,
    X86_TUNE_PARTIAL_REG_STALL=73,
    X86_TUNE_PROMOTE_QIMODE=74,
    X86_TUNE_PROMOTE_HI_REGS=75,
    X86_TUNE_HIMODE_MATH=76,
    X86_TUNE_SPLIT_LONG_MOVES=77,
    X86_TUNE_USE_XCHGB=78,
    X86_TUNE_USE_MOV0=79,
    X86_TUNE_NOT_VECTORMODE=80,
    X86_TUNE_AVOID_VECTOR_DECODE=81,
    X86_TUNE_AVOID_FALSE_DEP_FOR_BMI=82,
    X86_TUNE_BRANCH_PREDICTION_HINTS=83,
    X86_TUNE_QIMODE_MATH=84,
    X86_TUNE_PROMOTE_QI_REGS=85,
    X86_TUNE_ADJUST_UNROLL=86,
    X86_TUNE_ONE_IF_CONV_INSN=87,
    X86_TUNE_LAST=88
} ix86_tune_indices;

typedef struct processor_costs processor_costs, *Pprocessor_costs;

struct processor_costs {
    int add;
    int lea;
    int shift_var;
    int shift_const;
    int mult_init[5];
    int mult_bit;
    int divide[5];
    int movsx;
    int movzx;
    int large_insn;
    int move_ratio;
    int movzbl_load;
    int int_load[3];
    int int_store[3];
    int fp_move;
    int fp_load[3];
    int fp_store[3];
    int mmx_move;
    int mmx_load[2];
    int mmx_store[2];
    int sse_move;
    int sse_load[3];
    int sse_store[3];
    int mmxsse_to_integer;
    int l1_cache_size;
    int l2_cache_size;
    int prefetch_block;
    int simultaneous_prefetches;
    int branch_cost;
    int fadd;
    int fmul;
    int fdiv;
    int fabs;
    int fchs;
    int fsqrt;
    struct stringop_algs *memcpy;
    struct stringop_algs *memset;
    int scalar_stmt_cost;
    int scalar_load_cost;
    int scalar_store_cost;
    int vec_stmt_cost;
    int vec_to_scalar_cost;
    int scalar_to_vec_cost;
    int vec_align_load_cost;
    int vec_unalign_load_cost;
    int vec_store_cost;
    int cond_taken_branch_cost;
    int cond_not_taken_branch_cost;
};

typedef void (*func_ptr)(void);

typedef union _dont_use_tree_here_ _dont_use_tree_here_, *P_dont_use_tree_here_;

union _dont_use_tree_here_ {
};

typedef ushort WORD;

typedef ulong DWORD;

typedef int (*FARPROC)(void);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef void *LPCVOID;

typedef void *LPVOID;

typedef HINSTANCE HMODULE;

typedef DWORD *PDWORD;

typedef int BOOL;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_THUNK_DATA32 IMAGE_THUNK_DATA32, *PIMAGE_THUNK_DATA32;

struct IMAGE_THUNK_DATA32 {
    dword StartAddressOfRawData;
    dword EndAddressOfRawData;
    dword AddressOfIndex;
    dword AddressOfCallBacks;
    dword SizeOfZeroFill;
    dword Characteristics;
};

typedef struct IMAGE_DIRECTORY_ENTRY_EXPORT IMAGE_DIRECTORY_ENTRY_EXPORT, *PIMAGE_DIRECTORY_ENTRY_EXPORT;

struct IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    ImageBaseOffset32 Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    ImageBaseOffset32 AddressOfFunctions;
    ImageBaseOffset32 AddressOfNames;
    ImageBaseOffset32 AddressOfNameOrdinals;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};


// WARNING! conflicting data type names: /mbstring.h/_iobuf - /DWARF/stdio.h/_iobuf


// WARNING! conflicting data type names: /mbstring.h/FILE - /DWARF/stdio.h/FILE

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef long LONG;

typedef void *HANDLE;

typedef ulong ULONG_PTR;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef void *PVOID;

typedef ULONG_PTR SIZE_T;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef char CHAR;

typedef CHAR *LPCSTR;

typedef struct _MEMORY_BASIC_INFORMATION *PMEMORY_BASIC_INFORMATION;

typedef char *va_list;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef int (*_onexit_t)(void);

typedef uint size_t;




undefined4 tls_callback_1(undefined4 param_1,int param_2)

{
  if ((param_2 != 3) && (param_2 != 0)) {
    return 1;
  }
  ___mingw_TLScallback(param_1,param_2);
  return 1;
}


