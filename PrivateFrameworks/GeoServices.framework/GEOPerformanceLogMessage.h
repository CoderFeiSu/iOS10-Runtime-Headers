/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPerformanceLogMessage : PBCodable <NSCopying> {
    NSString * _perfEventKey;
    NSString * _perfEventValue;
}

@property (nonatomic, readonly) bool hasPerfEventKey;
@property (nonatomic, readonly) bool hasPerfEventValue;
@property (nonatomic, retain) NSString *perfEventKey;
@property (nonatomic, retain) NSString *perfEventValue;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPerfEventKey;
- (bool)hasPerfEventValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)perfEventKey;
- (id)perfEventValue;
- (bool)readFrom:(id)arg1;
- (void)setPerfEventKey:(id)arg1;
- (void)setPerfEventValue:(id)arg1;
- (void)writeTo:(id)arg1;

@end
