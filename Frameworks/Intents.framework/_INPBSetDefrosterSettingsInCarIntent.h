/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetDefrosterSettingsInCarIntent : PBCodable <NSCopying> {
    int  _defroster;
    BOOL  _enable;
    struct { 
        unsigned int defroster : 1; 
        unsigned int enable : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int defroster;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL hasDefroster;
@property (nonatomic) BOOL hasEnable;
@property (nonatomic, readonly) BOOL hasIntentMetadata;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)defroster;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)enable;
- (BOOL)hasDefroster;
- (BOOL)hasEnable;
- (BOOL)hasIntentMetadata;
- (unsigned int)hash;
- (id)intentMetadata;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDefroster:(int)arg1;
- (void)setEnable:(BOOL)arg1;
- (void)setHasDefroster:(BOOL)arg1;
- (void)setHasEnable:(BOOL)arg1;
- (void)setIntentMetadata:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end