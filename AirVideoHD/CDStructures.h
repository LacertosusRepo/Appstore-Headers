//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class GCKPB_PBArray, GCKPB_PBGeneratedMessage, NSData, NSOutputStream, NSString;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AcquisitionParams {
    _Bool _field1;
    int _field2;
    float _field3;
    int _field4;
    float _field5;
    float _field6;
    int _field7;
};

struct AcquisitionScorer;

struct Array<float, -1, 1, 0, -1, 1> {
    struct DenseStorage<float, -1, -1, 1, 0> _field1;
};

struct AudioModemDecoder {
    struct unique_ptr<audio_whispernet::WhispernetDecoder, std::__1::default_delete<audio_whispernet::WhispernetDecoder>> _field1;
    struct unique_ptr<audio_whispernet_dtmf::DtmfDecoder, std::__1::default_delete<audio_whispernet_dtmf::DtmfDecoder>> _field2;
    int _field3;
    int _field4;
};

struct AudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct AudioStreamPacketDescription;

struct ByteSymbolConverter {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
};

struct CATransform3D {
    double m11;
    double m12;
    double m13;
    double m14;
    double m21;
    double m22;
    double m23;
    double m24;
    double m31;
    double m32;
    double m33;
    double m34;
    double m41;
    double m42;
    double m43;
    double m44;
};

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct DecodeTokenParams {
    int _field1;
    _Bool _field2;
    float _field3;
    int _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    int _field9;
    int _field10;
};

struct DenseStorage<float, -1, -1, -1, 0> {
    float *_field1;
    long long _field2;
    long long _field3;
};

struct DenseStorage<float, -1, -1, 1, 0> {
    float *_field1;
    long long _field2;
};

struct DenseStorage<std::__1::complex<float>, -1, -1, -1, 1> {
    struct complex<float> *_field1;
    long long _field2;
    long long _field3;
};

struct DtmfDecoder {
    struct DtmfDecoderParams _field1;
    struct TokenSelectorParams _field2;
    struct ByteSymbolConverter _field3;
    int _field4;
    int _field5;
    int _field6;
    float _field7;
    float _field8;
    float _field9;
    int _field10;
    float _field11;
    int _field12;
    int _field13;
    struct ResampleAudio _field14;
    struct vector<audio_whispernet_dtmf::ToneStrengthFilter, std::__1::allocator<audio_whispernet_dtmf::ToneStrengthFilter>> _field15;
    struct vector<audio_whispernet::StreamBuffer<float>, std::__1::allocator<audio_whispernet::StreamBuffer<float>>> _field16;
    int _field17;
    _Bool _field18;
};

struct DtmfDecoderParams {
    struct DtmfEncoderParams _field1;
    float _field2;
    float _field3;
    struct ToneNormalizationParams _field4;
    int _field5;
    float _field6;
    float _field7;
    float _field8;
    int _field9;
    int _field10;
};

struct DtmfEncoderParams {
    float _field1;
    int _field2;
    float _field3;
    vector_f9ed6fc8 _field4;
    vector_f9ed6fc8 _field5;
    int _field6;
    struct vector<std::__1::vector<int, std::__1::allocator<int>>, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int>>>> _field7;
    int _field8;
    int _field9;
    _Bool _field10;
    float _field11;
};

struct Event {
    _Bool _auto;
    _Bool _state;
    struct _opaque_pthread_mutex_t _mutex;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _cond;
};

struct FIRFilter<std::__1::complex<float>, std::__1::complex<float>> {
    struct vector<std::__1::complex<float>, std::__1::allocator<std::__1::complex<float>>> _field1;
    struct vector<std::__1::complex<float>, std::__1::allocator<std::__1::complex<float>>> _field2;
};

struct GCKPB_PBExtensionDescription {
    char *_field1;
    int _field2;
    char *_field3;
    int _field4;
    CDUnion_53b4250e _field5;
    char *_field6;
    unsigned int _field7;
    char *_field8;
};

struct GCKPB_PBMessageEnumDescription {
    char *_field1;
};

struct GCKPB_PBMessageEnumValueDescription {
    char *_field1;
    int _field2;
};

struct GCKPB_PBMessageExtensionRangeDescription {
    unsigned int _field1;
    unsigned int _field2;
};

struct GCKPB_PBMessageFieldDescription {
    char *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    int _field5;
    unsigned long long _field6;
    char *_field7;
    CDUnion_53b4250e _field8;
    union {
        char *_field1;
        CDUnknownFunctionPointerType _field2;
    } _field9;
};

struct GPUMatrix3x3 {
    struct GPUVector3 _field1;
    struct GPUVector3 _field2;
    struct GPUVector3 _field3;
};

struct GPUMatrix4x4 {
    struct GPUVector4 _field1;
    struct GPUVector4 _field2;
    struct GPUVector4 _field3;
    struct GPUVector4 _field4;
};

struct GPUTextureOptions {
    unsigned int minFilter;
    unsigned int magFilter;
    unsigned int wrapS;
    unsigned int wrapT;
    unsigned int internalFormat;
    unsigned int format;
    unsigned int type;
};

struct GPUVector3 {
    float _field1;
    float _field2;
    float _field3;
};

struct GPUVector4 {
    float one;
    float two;
    float three;
    float four;
};

struct IMTrackerPresenceClient {
    struct SharedPtr<Poco::Net::WebSocket, Poco::ReferenceCounter, Poco::ReleasePolicy<Poco::Net::WebSocket>> _webSocket;
    struct Mutex _cs;
    _Bool _interrupted;
    struct Event _closeEvent;
};

struct Matrix<float, -1, -1, 0, -1, -1> {
    struct DenseStorage<float, -1, -1, -1, 0> _field1;
};

struct Matrix<std::__1::complex<float>, -1, -1, 1, -1, -1> {
    struct DenseStorage<std::__1::complex<float>, -1, -1, -1, 1> _field1;
};

struct Mutex {
    struct _opaque_pthread_mutex_t _mutex;
};

struct PBInputBufferState {
    char *bytes;
    unsigned long long bufferSize;
    unsigned long long bufferPos;
    unsigned long long currentLimit;
};

struct PBOutputBufferState {
    char *bytes;
    unsigned long long size;
    unsigned long long position;
    NSOutputStream *output;
};

struct PostprocessAcquisitionParams {
    int _field1;
    int _field2;
    float _field3;
};

struct ReferenceCounter;

struct ResampleAudio {
    void *_field1;
    float _field2;
    _Bool _field3;
    long long _field4;
    long long _field5;
};

struct SharedPtr<Poco::Net::WebSocket, Poco::ReferenceCounter, Poco::ReleasePolicy<Poco::Net::WebSocket>> {
    struct ReferenceCounter *_pCounter;
    struct WebSocket *_ptr;
};

struct StreamBuffer<float> {
    vector_f9ed6fc8 _field1;
    int _field2;
};

struct SymbolWaveCoder {
    CDUnknownFunctionPointerType *_field1;
    struct SymbolWaveCoderParams _field2;
    int _field3;
    int _field4;
    int _field5;
    vector_f9ed6fc8 _field6;
    struct Matrix<float, -1, -1, 0, -1, -1> _field7;
    struct vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>> _field8;
};

struct SymbolWaveCoderParams {
    vector_f9ed6fc8 _field1;
    float _field2;
    int _field3;
    float _field4;
    int _field5;
    int _field6;
    int _field7;
    _Bool _field8;
    float _field9;
};

struct TokenSelectorParams {
    int _field1;
    int _field2;
    int _field3;
    _Bool _field4;
    int _field5;
    int _field6;
    int _field7;
};

struct TokenSymbolConverter;

struct ToneNormalizationParams {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct ToneStrengthFilter;

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double _field1;
    double _field2;
};

struct WebSocket;

struct WhispernetDecoder {
    struct unique_ptr<audio_whispernet::SymbolWaveCoder, std::__1::default_delete<audio_whispernet::SymbolWaveCoder>> _field1;
    struct WhispernetDecoderParams _field2;
    struct unique_ptr<audio_whispernet::TokenSymbolConverter, std::__1::default_delete<audio_whispernet::TokenSymbolConverter>> _field3;
    float _field4;
    vector_f9ed6fc8 _field5;
    vector_f9ed6fc8 _field6;
    struct Matrix<std::__1::complex<float>, -1, -1, 1, -1, -1> _field7;
    int _field8;
    int _field9;
    struct Array<float, -1, 1, 0, -1, 1> _field10;
    vector_f9ed6fc8 _field11;
    struct Matrix<std::__1::complex<float>, -1, -1, 1, -1, -1> _field12;
    struct Array<float, -1, 1, 0, -1, 1> _field13;
    struct StreamBuffer<float> _field14;
    struct complex<float> _field15;
    struct complex<float> _field16;
    struct ResampleAudio _field17[2];
    struct FIRFilter<std::__1::complex<float>, std::__1::complex<float>> _field18;
    struct StreamBuffer<float> _field19[2];
    struct unique_ptr<audio_whispernet::AcquisitionScorer, std::__1::default_delete<audio_whispernet::AcquisitionScorer>> _field20;
    struct StreamBuffer<float> _field21;
    struct map<int, Eigen::Array<float, -1, 1, 0, -1, 1>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, Eigen::Array<float, -1, 1, 0, -1, 1>>>> _field22;
    int _field23;
    int _field24;
    int _field25;
    int _field26;
    float _field27;
    float _field28;
    int _field29;
    _Bool _field30;
};

struct WhispernetDecoderParams {
    float _field1;
    _Bool _field2;
    struct AcquisitionParams _field3;
    struct PostprocessAcquisitionParams _field4;
    struct DecodeTokenParams _field5;
};

struct _DDRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct complex<float> {
    float _field1;
    float _field2;
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct internal_state;

struct map<int, Eigen::Array<float, -1, 1, 0, -1, 1>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, Eigen::Array<float, -1, 1, 0, -1, 1>>>> {
    struct __tree<std::__1::__value_type<int, Eigen::Array<float, -1, 1, 0, -1, 1>>, std::__1::__map_value_compare<int, std::__1::__value_type<int, Eigen::Array<float, -1, 1, 0, -1, 1>>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, Eigen::Array<float, -1, 1, 0, -1, 1>>>> {
        struct __tree_node<std::__1::__value_type<int, Eigen::Array<float, -1, 1, 0, -1, 1>>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, Eigen::Array<float, -1, 1, 0, -1, 1>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
                struct __tree_node_base<void *> *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, Eigen::Array<float, -1, 1, 0, -1, 1>>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct unique_ptr<audio_whispernet::AcquisitionScorer, std::__1::default_delete<audio_whispernet::AcquisitionScorer>> {
    struct __compressed_pair<audio_whispernet::AcquisitionScorer *, std::__1::default_delete<audio_whispernet::AcquisitionScorer>> {
        struct AcquisitionScorer *_field1;
    } _field1;
};

struct unique_ptr<audio_whispernet::SymbolWaveCoder, std::__1::default_delete<audio_whispernet::SymbolWaveCoder>> {
    struct __compressed_pair<audio_whispernet::SymbolWaveCoder *, std::__1::default_delete<audio_whispernet::SymbolWaveCoder>> {
        struct SymbolWaveCoder *_field1;
    } _field1;
};

struct unique_ptr<audio_whispernet::TokenSymbolConverter, std::__1::default_delete<audio_whispernet::TokenSymbolConverter>> {
    struct __compressed_pair<audio_whispernet::TokenSymbolConverter *, std::__1::default_delete<audio_whispernet::TokenSymbolConverter>> {
        struct TokenSymbolConverter *_field1;
    } _field1;
};

struct unique_ptr<audio_whispernet::WhispernetDecoder, std::__1::default_delete<audio_whispernet::WhispernetDecoder>> {
    struct __compressed_pair<audio_whispernet::WhispernetDecoder *, std::__1::default_delete<audio_whispernet::WhispernetDecoder>> {
        struct WhispernetDecoder *_field1;
    } _field1;
};

struct unique_ptr<audio_whispernet_dtmf::DtmfDecoder, std::__1::default_delete<audio_whispernet_dtmf::DtmfDecoder>> {
    struct __compressed_pair<audio_whispernet_dtmf::DtmfDecoder *, std::__1::default_delete<audio_whispernet_dtmf::DtmfDecoder>> {
        struct DtmfDecoder *_field1;
    } _field1;
};

struct vector<audio_whispernet::StreamBuffer<float>, std::__1::allocator<audio_whispernet::StreamBuffer<float>>> {
    struct StreamBuffer<float> *_field1;
    struct StreamBuffer<float> *_field2;
    struct __compressed_pair<audio_whispernet::StreamBuffer<float>*, std::__1::allocator<audio_whispernet::StreamBuffer<float>>> {
        struct StreamBuffer<float> *_field1;
    } _field3;
};

struct vector<audio_whispernet_dtmf::ToneStrengthFilter, std::__1::allocator<audio_whispernet_dtmf::ToneStrengthFilter>> {
    struct ToneStrengthFilter *_field1;
    struct ToneStrengthFilter *_field2;
    struct __compressed_pair<audio_whispernet_dtmf::ToneStrengthFilter *, std::__1::allocator<audio_whispernet_dtmf::ToneStrengthFilter>> {
        struct ToneStrengthFilter *_field1;
    } _field3;
};

struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
};

struct vector<int, std::__1::allocator<int>>;

struct vector<std::__1::complex<float>, std::__1::allocator<std::__1::complex<float>>> {
    struct complex<float> *_field1;
    struct complex<float> *_field2;
    struct __compressed_pair<std::__1::complex<float>*, std::__1::allocator<std::__1::complex<float>>> {
        struct complex<float> *_field1;
    } _field3;
};

struct vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>> {
    vector_f9ed6fc8 *_field1;
    vector_f9ed6fc8 *_field2;
    struct __compressed_pair<std::__1::vector<float, std::__1::allocator<float>>*, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>> {
        vector_f9ed6fc8 *_field1;
    } _field3;
};

struct vector<std::__1::vector<int, std::__1::allocator<int>>, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int>>>> {
    struct vector<int, std::__1::allocator<int>> *_field1;
    struct vector<int, std::__1::allocator<int>> *_field2;
    struct __compressed_pair<std::__1::vector<int, std::__1::allocator<int>>*, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int>>>> {
        struct vector<int, std::__1::allocator<int>> *_field1;
    } _field3;
};

struct vector<unsigned char, std::__1::allocator<unsigned char>> {
    char *_field1;
    char *_field2;
    struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
        char *_field1;
    } _field3;
};

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned long long total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned long long total_out;
    char *msg;
    struct internal_state *state;
    CDUnknownFunctionPointerType zalloc;
    CDUnknownFunctionPointerType zfree;
    void *opaque;
    int data_type;
    unsigned long long adler;
    unsigned long long reserved;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    unsigned char _field2;
    _Bool _field3;
    unsigned long long _field4;
} CDStruct_6a6a01a4;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long _field1;
    int _field2;
} CDStruct_87dc826d;

// Template types
typedef struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
} vector_f9ed6fc8;

typedef struct vector<unsigned char, std::__1::allocator<unsigned char>> {
    char *_field1;
    char *_field2;
    struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
        char *_field1;
    } _field3;
} vector_5b3bfa18;

#pragma mark Typedef'd Unions

typedef union {
    _Bool valueBool;
    unsigned int valueFixed32;
    int valueSFixed32;
    float valueFloat;
    unsigned long long valueFixed64;
    long long valueSFixed64;
    double valueDouble;
    int valueInt32;
    long long valueInt64;
    int valueSInt32;
    long long valueSInt64;
    unsigned int valueUInt32;
    unsigned long long valueUInt64;
    NSData *valueData;
    NSString *valueString;
    GCKPB_PBGeneratedMessage *valueMessage;
    GCKPB_PBGeneratedMessage *valueGroup;
    int valueEnum;
    GCKPB_PBArray *valueArray;
    id valueObject;
} CDUnion_53b4250e;

