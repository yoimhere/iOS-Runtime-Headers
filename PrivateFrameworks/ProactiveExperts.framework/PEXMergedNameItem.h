/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXMergedNameItem : NSObject {
    unsigned int  _fodMerges;
    NSMutableSet * _mergedCityNames;
    PEXName * _mergedName;
    NSMutableSet * _mergedStreetNames;
    _DECNameItem * _originalNameItem;
}

@property (nonatomic) unsigned int fodMerges;
@property (nonatomic, retain) NSMutableSet *mergedCityNames;
@property (nonatomic, retain) PEXName *mergedName;
@property (nonatomic, retain) NSMutableSet *mergedStreetNames;
@property (nonatomic, retain) _DECNameItem *originalNameItem;

- (void).cxx_destruct;
- (unsigned int)fodMerges;
- (id)mergedCityNames;
- (id)mergedName;
- (id)mergedStreetNames;
- (id)originalNameItem;
- (void)setFodMerges:(unsigned int)arg1;
- (void)setMergedCityNames:(id)arg1;
- (void)setMergedName:(id)arg1;
- (void)setMergedStreetNames:(id)arg1;
- (void)setOriginalNameItem:(id)arg1;

@end