/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UINib : NSObject 
{
    id storage;
}

+ (id)nibWithNibName:(id)arg1 bundle:(id)arg2;
+ (id)nibWithData:(id)arg1 bundle:(id)arg2;

- (id)initWithBundle:(id)arg1;
- (id)initWithData:(id)arg1 bundle:(id)arg2;
- (BOOL)instantiatingForSimulator;
- (void)setInstantiatingForSimulator:(BOOL)arg1;
- (id)effectiveBundle;
- (id)lazyArchiveData;
- (id)unarchiverForInstantiatingReturningError:(id*)arg1;
- (id)instantiateWithOwner:(id)arg1 options:(id)arg2;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithContentsOfFile:(id)arg1;
- (void)dealloc;

@end