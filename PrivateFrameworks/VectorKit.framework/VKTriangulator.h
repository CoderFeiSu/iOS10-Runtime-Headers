/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableData;

@interface VKTriangulator : NSObject  {
    void *_opaque_triangulator;
    unsigned long _segments_capacity;
    void *_opaque_segments;
    unsigned long _mesh_capacity;
    unsigned int *_mesh;
    NSMutableData *_scratch;
}


- (BOOL)_triangulateIndicesInto:(id)arg1;
- (id)triangulateIndicesForPoints:(struct { int x1; int x2; }*)arg1 pointCount:(int)arg2;
- (id)init;
- (void)dealloc;

@end