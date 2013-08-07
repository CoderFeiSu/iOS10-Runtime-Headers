/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, NSArray;

@interface UIActivityGroupViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {
    BOOL _darkStyleOnLegacyApp;
    BOOL _hasActivities;
    int _activityCategory;
    NSArray *_activities;
    NSDictionary *_customActivityTitles;
}

@property int activityCategory;
@property(copy) NSArray * activities;
@property(copy) NSDictionary * customActivityTitles;
@property BOOL darkStyleOnLegacyApp;
@property BOOL hasActivities;


- (void)dealloc;
- (void)setHasActivities:(BOOL)arg1;
- (BOOL)hasActivities;
- (void)setCustomActivityTitles:(id)arg1;
- (id)customActivityTitles;
- (id)activities;
- (int)activityCategory;
- (void)setActivities:(id)arg1;
- (id)initWithActivityCategory:(int)arg1 title:(id)arg2;
- (void)setActivityCategory:(int)arg1;
- (void)setDarkStyleOnLegacyApp:(BOOL)arg1;
- (BOOL)darkStyleOnLegacyApp;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidLoad;

@end