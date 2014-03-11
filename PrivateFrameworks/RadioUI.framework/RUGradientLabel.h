/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSArray, UIColor;

@interface RUGradientLabel : UILabel {
    struct CGSize { 
        float width; 
        float height; 
    NSArray *_gradientColors;
    NSArray *_gradientLocations;
    float _internalShadowBlur;
    UIColor *_internalShadowColor;
    } _internalShadowOffset;
    UIColor *_internalTextColor;
}

@property(copy) NSArray * gradientColors;
@property(copy) NSArray * gradientLocations;

- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)gradientColors;
- (id)gradientLocations;
- (void)setGradientColors:(id)arg1;
- (void)setGradientLocations:(id)arg1;
- (void)setShadowBlur:(float)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setTextColor:(id)arg1;

@end