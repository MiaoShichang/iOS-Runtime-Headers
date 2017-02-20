/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSRegistrationCompleted : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int registrationError : 1; 
        unsigned int registrationType : 1; 
        unsigned int wasSuccessful : 1; 
    }  _has;
    int  _registrationError;
    int  _registrationType;
    NSString * _serviceIdentifier;
    unsigned long long  _timestamp;
    unsigned int  _wasSuccessful;
}

@property (nonatomic) BOOL hasRegistrationError;
@property (nonatomic) BOOL hasRegistrationType;
@property (nonatomic, readonly) BOOL hasServiceIdentifier;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWasSuccessful;
@property (nonatomic) int registrationError;
@property (nonatomic) int registrationType;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int wasSuccessful;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasRegistrationError;
- (BOOL)hasRegistrationType;
- (BOOL)hasServiceIdentifier;
- (BOOL)hasTimestamp;
- (BOOL)hasWasSuccessful;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)registrationError;
- (int)registrationType;
- (id)serviceIdentifier;
- (void)setHasRegistrationError:(BOOL)arg1;
- (void)setHasRegistrationType:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasWasSuccessful:(BOOL)arg1;
- (void)setRegistrationError:(int)arg1;
- (void)setRegistrationType:(int)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWasSuccessful:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)wasSuccessful;
- (void)writeTo:(id)arg1;

@end