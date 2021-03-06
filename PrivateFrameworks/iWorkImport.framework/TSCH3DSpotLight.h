/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSCH3DSpotLight : TSCH3DLight <TSCH3DLightPositionable, TSCH3DLightDirectional> {
    struct tvec3<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
        union { 
            float z; 
            float b; 
            float p; 
        } ; 
    struct tvec3<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
        union { 
            float z; 
            float b; 
            float p; 
        } ; 
    float mCutOff;
    } mDirection;
    float mDropOff;
    } mPosition;
}

@property float cutOff;
@property struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; } direction;
@property float dropOff;
@property struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; } position;

+ (Class)effectClass;
+ (id)instanceWithArchive:(const struct Chart3DLightArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct Chart3DVectorArchive {} *x4; struct Chart3DVectorArchive {} *x5; struct Chart3DVectorArchive {} *x6; struct Chart3DVectorArchive {} *x7; float x8; unsigned int x9; struct Chart3DPointLightArchive {} *x10; struct Chart3DDirectionalLightArchive {} *x11; struct Chart3DSpotLightArchive {} *x12; boolx13; int x14; unsigned int x15[1]; }*)arg1 unarchiver:(id)arg2;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)cutOff;
- (id)description;
- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })direction;
- (float)dropOff;
- (id)init;
- (id)initWithArchive:(const struct Chart3DLightArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct Chart3DVectorArchive {} *x4; struct Chart3DVectorArchive {} *x5; struct Chart3DVectorArchive {} *x6; struct Chart3DVectorArchive {} *x7; float x8; unsigned int x9; struct Chart3DPointLightArchive {} *x10; struct Chart3DDirectionalLightArchive {} *x11; struct Chart3DSpotLightArchive {} *x12; boolx13; int x14; unsigned int x15[1]; }*)arg1 unarchiver:(id)arg2;
- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })position;
- (void)saveToArchive:(struct Chart3DLightArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct Chart3DVectorArchive {} *x4; struct Chart3DVectorArchive {} *x5; struct Chart3DVectorArchive {} *x6; struct Chart3DVectorArchive {} *x7; float x8; unsigned int x9; struct Chart3DPointLightArchive {} *x10; struct Chart3DDirectionalLightArchive {} *x11; struct Chart3DSpotLightArchive {} *x12; boolx13; int x14; unsigned int x15[1]; }*)arg1 archiver:(id)arg2;
- (void)setCutOff:(float)arg1;
- (void)setDirection:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })arg1;
- (void)setDropOff:(float)arg1;
- (void)setPosition:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })arg1;

@end
