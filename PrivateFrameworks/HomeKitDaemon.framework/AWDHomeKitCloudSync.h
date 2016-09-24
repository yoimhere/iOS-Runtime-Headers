/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitCloudSync : PBCodable <NSCopying> {
    int  _dataSyncState;
    unsigned int  _fetchCount;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int dataSyncState : 1; 
        unsigned int fetchCount : 1; 
        unsigned int pushCount : 1; 
        unsigned int uploadCount : 1; 
        unsigned int uploadErrorCount : 1; 
        unsigned int hasDecryptionFailed : 1; 
        unsigned int lastDecryptionFailed : 1; 
        unsigned int uploadMaximumDelayReached : 1; 
    }  _has;
    BOOL  _hasDecryptionFailed;
    BOOL  _lastDecryptionFailed;
    unsigned int  _pushCount;
    unsigned int  _timestamp;
    NSMutableArray * _topErrors;
    NSMutableArray * _topReasons;
    unsigned int  _uploadCount;
    unsigned int  _uploadErrorCount;
    BOOL  _uploadMaximumDelayReached;
}

@property (nonatomic) int dataSyncState;
@property (nonatomic) unsigned int fetchCount;
@property (nonatomic) BOOL hasDataSyncState;
@property (nonatomic) BOOL hasDecryptionFailed;
@property (nonatomic) BOOL hasFetchCount;
@property (nonatomic) BOOL hasHasDecryptionFailed;
@property (nonatomic) BOOL hasLastDecryptionFailed;
@property (nonatomic) BOOL hasPushCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUploadCount;
@property (nonatomic) BOOL hasUploadErrorCount;
@property (nonatomic) BOOL hasUploadMaximumDelayReached;
@property (nonatomic) BOOL lastDecryptionFailed;
@property (nonatomic) unsigned int pushCount;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic, retain) NSMutableArray *topErrors;
@property (nonatomic, retain) NSMutableArray *topReasons;
@property (nonatomic) unsigned int uploadCount;
@property (nonatomic) unsigned int uploadErrorCount;
@property (nonatomic) BOOL uploadMaximumDelayReached;

+ (Class)topErrorsType;
+ (Class)topReasonsType;

- (void).cxx_destruct;
- (int)StringAsDataSyncState:(id)arg1;
- (void)addTopErrors:(id)arg1;
- (void)addTopReasons:(id)arg1;
- (void)clearTopErrors;
- (void)clearTopReasons;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dataSyncState;
- (id)dataSyncStateAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fetchCount;
- (BOOL)hasDataSyncState;
- (BOOL)hasDecryptionFailed;
- (BOOL)hasFetchCount;
- (BOOL)hasHasDecryptionFailed;
- (BOOL)hasLastDecryptionFailed;
- (BOOL)hasPushCount;
- (BOOL)hasTimestamp;
- (BOOL)hasUploadCount;
- (BOOL)hasUploadErrorCount;
- (BOOL)hasUploadMaximumDelayReached;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)lastDecryptionFailed;
- (void)mergeFrom:(id)arg1;
- (unsigned int)pushCount;
- (BOOL)readFrom:(id)arg1;
- (void)setDataSyncState:(int)arg1;
- (void)setFetchCount:(unsigned int)arg1;
- (void)setHasDataSyncState:(BOOL)arg1;
- (void)setHasDecryptionFailed:(BOOL)arg1;
- (void)setHasFetchCount:(BOOL)arg1;
- (void)setHasHasDecryptionFailed:(BOOL)arg1;
- (void)setHasLastDecryptionFailed:(BOOL)arg1;
- (void)setHasPushCount:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasUploadCount:(BOOL)arg1;
- (void)setHasUploadErrorCount:(BOOL)arg1;
- (void)setHasUploadMaximumDelayReached:(BOOL)arg1;
- (void)setLastDecryptionFailed:(BOOL)arg1;
- (void)setPushCount:(unsigned int)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (void)setTopErrors:(id)arg1;
- (void)setTopReasons:(id)arg1;
- (void)setUploadCount:(unsigned int)arg1;
- (void)setUploadErrorCount:(unsigned int)arg1;
- (void)setUploadMaximumDelayReached:(BOOL)arg1;
- (unsigned int)timestamp;
- (id)topErrors;
- (id)topErrorsAtIndex:(unsigned int)arg1;
- (unsigned int)topErrorsCount;
- (id)topReasons;
- (id)topReasonsAtIndex:(unsigned int)arg1;
- (unsigned int)topReasonsCount;
- (unsigned int)uploadCount;
- (unsigned int)uploadErrorCount;
- (BOOL)uploadMaximumDelayReached;
- (void)writeTo:(id)arg1;

@end