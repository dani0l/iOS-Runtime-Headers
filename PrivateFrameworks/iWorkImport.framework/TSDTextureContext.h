/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSDAnimationSession>;

@interface TSDTextureContext : NSObject <NSCopying> {
    unsigned int _isMagicMove : 1;
    unsigned int _shouldAddFinal : 1;
    unsigned int _shouldAddMasks : 1;
    unsigned int _shouldAddReversedFinal : 1;
    unsigned int _shouldAddMagicMoveObjectOnly : 1;
    unsigned int _shouldNotAddContainedReps : 1;
    unsigned int _shouldNotAddShapeAttributes : 1;
    unsigned int _shouldNotAddText : 1;
    unsigned int _shouldNotCacheTexture : 1;
    unsigned int _shouldSeparateReflection : 1;
    unsigned int _shouldSeparateShadow : 1;
    unsigned int _shouldSeparateStroke : 1;
    unsigned int _shouldSeparateText : 1;
    unsigned int _shouldIgnoreScaleInSourceImage : 1;
    unsigned int _shouldDistortToFit : 1;
    unsigned int _shouldForceTextureGeneration : 1;
    <TSDAnimationSession> *_session;
    BOOL _shouldAddNoShapeAttributes;
}

@property BOOL isMagicMove;
@property <TSDAnimationSession> * session;
@property BOOL shouldAddFinal;
@property BOOL shouldAddMagicMoveObjectOnly;
@property BOOL shouldAddMasks;
@property BOOL shouldAddReversedFinal;
@property BOOL shouldDistortToFit;
@property BOOL shouldForceTextureGeneration;
@property BOOL shouldIgnoreScaleInSourceImage;
@property BOOL shouldNotAddContainedReps;
@property BOOL shouldNotAddShapeAttributes;
@property BOOL shouldNotAddText;
@property BOOL shouldNotCacheTexture;
@property BOOL shouldSeparateReflection;
@property BOOL shouldSeparateShadow;
@property BOOL shouldSeparateStroke;
@property BOOL shouldSeparateText;

+ (id)context;
+ (id)contextWithSession:(id)arg1;
+ (id)contextWithTextureContext:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMagicMove;
- (void)reset;
- (id)session;
- (void)setIsMagicMove:(BOOL)arg1;
- (void)setSession:(id)arg1;
- (void)setShouldAddFinal:(BOOL)arg1;
- (void)setShouldAddMagicMoveObjectOnly:(BOOL)arg1;
- (void)setShouldAddMasks:(BOOL)arg1;
- (void)setShouldAddReversedFinal:(BOOL)arg1;
- (void)setShouldDistortToFit:(BOOL)arg1;
- (void)setShouldForceTextureGeneration:(BOOL)arg1;
- (void)setShouldIgnoreScaleInSourceImage:(BOOL)arg1;
- (void)setShouldNotAddContainedReps:(BOOL)arg1;
- (void)setShouldNotAddShapeAttributes:(BOOL)arg1;
- (void)setShouldNotAddText:(BOOL)arg1;
- (void)setShouldNotCacheTexture:(BOOL)arg1;
- (void)setShouldSeparateReflection:(BOOL)arg1;
- (void)setShouldSeparateShadow:(BOOL)arg1;
- (void)setShouldSeparateStroke:(BOOL)arg1;
- (void)setShouldSeparateText:(BOOL)arg1;
- (BOOL)shouldAddFinal;
- (BOOL)shouldAddMagicMoveObjectOnly;
- (BOOL)shouldAddMasks;
- (BOOL)shouldAddReversedFinal;
- (BOOL)shouldDistortToFit;
- (BOOL)shouldForceTextureGeneration;
- (BOOL)shouldIgnoreScaleInSourceImage;
- (BOOL)shouldNotAddContainedReps;
- (BOOL)shouldNotAddShapeAttributes;
- (BOOL)shouldNotAddText;
- (BOOL)shouldNotCacheTexture;
- (BOOL)shouldSeparateReflection;
- (BOOL)shouldSeparateShadow;
- (BOOL)shouldSeparateStroke;
- (BOOL)shouldSeparateText;

@end
