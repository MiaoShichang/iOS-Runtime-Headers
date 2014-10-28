/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class NSDictionary;

@interface SCNMaterialAttachment : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    void *context;
    unsigned int glID;
    NSDictionary *options;
    } size;
    unsigned int target;
}

@property void* context;
@property unsigned int glID;
@property(copy) NSDictionary * options;
@property struct CGSize { float x1; float x2; } size;
@property unsigned int target;

- (void*)context;
- (void)dealloc;
- (unsigned int)glID;
- (id)options;
- (void)setContext:(void*)arg1;
- (void)setGlID:(unsigned int)arg1;
- (void)setOptions:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTarget:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })size;
- (unsigned int)target;

@end