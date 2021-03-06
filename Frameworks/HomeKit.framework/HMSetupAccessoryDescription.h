/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMSetupAccessoryDescription : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accessoryName;
    NSUUID * _accessoryUUID;
    BOOL  _addAndSetupAccessories;
    NSString * _appIdentifier;
}

@property (nonatomic, readonly) NSString *accessoryName;
@property (nonatomic, readonly) NSUUID *accessoryUUID;
@property (nonatomic, readonly) BOOL addAndSetupAccessories;
@property (nonatomic, readonly) NSString *appIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryName;
- (id)accessoryUUID;
- (BOOL)addAndSetupAccessories;
- (id)appIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initToSetupAccessories:(id)arg1;
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 appID:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end
