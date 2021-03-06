/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDSectionedTableViewController : MCD_OLD_TableViewController {
    unsigned int *_offsetOfSection;
}

@property(readonly) unsigned int countOfActions;
@property(readonly) BOOL isSectioning;

- (unsigned int)countOfActions;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (BOOL)isSectioning;
- (int)numberOfSectionsInTableView:(id)arg1;
- (unsigned int)rowAtIndexPath:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;

@end
