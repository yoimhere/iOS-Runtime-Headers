/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSUserDefaults;



@interface Defaults : NSObject 
{
    NSUserDefaults *defaults;
}

+ (id)sharedInstance;

- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (id)primaryEmailAddress;
- (void)setPrimaryEmailAddress:(id)arg1;
- (id)mailAccountDirectory;
- (void)setDefaultMailDirectory:(id)arg1;
- (id)defaultMailDirectory;
- (id)archiveMailbox;
- (id)draftsMailbox;
- (id)trashMailboxName;
- (id)alternateAddressesForSelf;
- (id)dictionaryForKey:(id)arg1;
- (NSInteger)integerForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (BOOL)synchronize;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (void)dealloc;

@end