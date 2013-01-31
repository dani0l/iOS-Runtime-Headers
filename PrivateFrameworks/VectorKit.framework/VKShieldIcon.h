/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSArray, NSString, VKGenericShieldDrawStyle;

@interface VKShieldIcon : VKLabelIcon  {
    long long _shieldType;
    NSString *_shieldText;
    VKGenericShieldDrawStyle *_genericShieldStyle;
    int _mode;
    NSArray *_resourceNames;
    BOOL _drawingRenderableIcon;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
}

@property(readonly) NSString * shieldText;
@property(readonly) long long shieldType;


- (id)renderableIcon;
- (void)updateWithLabelContext:(struct LabelContext { id x1; id x2; id x3; id x4; struct ViewTransform {} *x5; int x6; int x7; unsigned int x8; float x9; boolx10; boolx11; boolx12; boolx13; boolx14; boolx15; int x16; struct { double x_17_1_1; double x_17_1_2; double x_17_1_3; double x_17_1_4; } x17; struct { float x_18_1_1; float x_18_1_2; float x_18_1_3; float x_18_1_4; } x18; struct { float x_19_1_1; float x_19_1_2; float x_19_1_3; float x_19_1_4; } x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; float x_20_1_4; } x20; int x21; }*)arg1 labelStyle:(struct { BOOL x1; float x2; float x3; float x4; unsigned int x5; float x6; BOOL x7; BOOL x8; BOOL x9; struct _VGLColor { float x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; } x10; struct _VGLColor { float x_11_1_1; float x_11_1_2; float x_11_1_3; float x_11_1_4; } x11; unsigned int x12; float x13; id x14; id x15; struct { int x_16_1_1; struct _VGLColor { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_16_1_2; struct _VGLColor { float x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; } x_16_1_3[2]; struct _VGLColor { float x_4_2_1; float x_4_2_2; float x_4_2_3; float x_4_2_4; } x_16_1_4; struct _VGLColor { float x_5_2_1; float x_5_2_2; float x_5_2_3; float x_5_2_4; } x_16_1_5; } x16; BOOL x17; float x18; float x19; int x20; BOOL x21; BOOL x22; BOOL x23; }*)arg2 atMercatorPoint:(struct { double x1; double x2; double x3; })arg3;
- (long long)shieldType;
- (id)shieldText;
- (id)initWithShieldType:(long long)arg1 shieldText:(const char *)arg2 genericShieldStyle:(id)arg3 mode:(int)arg4;
- (id).cxx_construct;
- (void)dealloc;

@end