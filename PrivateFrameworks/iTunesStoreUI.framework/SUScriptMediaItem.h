/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class MPMediaItem;

@interface SUScriptMediaItem : SUScriptObject {
}

@property(readonly) MPMediaItem * nativeItem;

+ (id)copyScriptMediaTypesForNativeMediaTypes:(int)arg1;
+ (void)initialize;
+ (int)nativeMediaTypesForScriptMediaTypes:(id)arg1;
+ (id)scriptMediaTypeForNativeMediaType:(int)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)imageURLWithWidth:(id)arg1 height:(id)arg2;
- (id)nativeItem;
- (id)valueForProperty:(id)arg1;

@end