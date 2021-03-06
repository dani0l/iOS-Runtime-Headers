/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABCardGroupItem, NSArray;

@interface ABContactCell : UITableViewCell {
    BOOL _addedConstantsConstraints;
    ABCardGroupItem *_cardGroupItem;
    BOOL _hasBeenDisplayed;
    float _leftContentMargin;
    float _rightContentMargin;
    NSArray *_variableConstraints;
}

@property(retain) ABCardGroupItem * cardGroupItem;
@property BOOL hasBeenDisplayed;
@property float leftContentMargin;
@property float rightContentMargin;
@property BOOL showSeparator;

- (id)cardGroupItem;
- (id)constantConstraints;
- (void)dealloc;
- (BOOL)hasBeenDisplayed;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (float)leftContentMargin;
- (float)minCellHeight;
- (void)performAccessoryAction;
- (void)performDefaultAction;
- (void)prepareForReuse;
- (float)rightContentMargin;
- (void)setCardGroupItem:(id)arg1;
- (void)setHasBeenDisplayed:(BOOL)arg1;
- (void)setLeftContentMargin:(float)arg1;
- (void)setRightContentMargin:(float)arg1;
- (void)setShowSeparator:(BOOL)arg1;
- (BOOL)shouldPerformAccessoryAction;
- (BOOL)shouldPerformDefaultAction;
- (BOOL)showSeparator;
- (void)updateConstraints;
- (id)variableConstraints;

@end
