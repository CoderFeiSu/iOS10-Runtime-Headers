/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, SUDownloadManager;

@interface SUDownloadManagerDataSource : SUTableDataSource  {
    SUDownloadManager *_downloadManager;
}

@property(readonly) SUDownloadManager * downloadManager;
@property(readonly) NSArray * downloads;


- (id)downloadForIndexPath:(id)arg1;
- (BOOL)canDeleteIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (BOOL)deleteIndexPath:(id)arg1;
- (id)downloads;
- (BOOL)canSelectIndexPath:(id)arg1;
- (id)downloadManager;
- (void)dealloc;
- (int)tableViewStyle;
- (int)numberOfSections;
- (int)numberOfRowsInSection:(int)arg1;
- (void)reloadData;
- (id)initWithDownloadManager:(id)arg1;

@end