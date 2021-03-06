/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateMapsServer : PBCodable <NSCopying> {
    GEOMapsServerMetadata * _serverMetadata;
}

@property (nonatomic, readonly) bool hasServerMetadata;
@property (nonatomic, retain) GEOMapsServerMetadata *serverMetadata;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasServerMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serverMetadata;
- (void)setServerMetadata:(id)arg1;
- (void)writeTo:(id)arg1;

@end
