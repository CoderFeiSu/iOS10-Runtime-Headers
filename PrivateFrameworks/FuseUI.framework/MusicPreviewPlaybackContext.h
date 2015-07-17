/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicPreviewPlaybackContext : MPPlaybackContext {
    NSArray * _items;
    unsigned int  _previewIdentifier;
}

@property (nonatomic, readonly) NSArray *items;
@property (nonatomic) unsigned int previewIdentifier;

+ (Class)queueFeederClass;

- (void).cxx_destruct;
- (id)initWithItems:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)items;
- (unsigned int)previewIdentifier;
- (void)setPreviewIdentifier:(unsigned int)arg1;

@end