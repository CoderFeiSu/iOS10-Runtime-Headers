/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOClientCapabilities : PBCodable <NSCopying> {
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSString *_hardwareModel;
    int _maxManeuverTypeSupported;
    struct { 
        unsigned int maxManeuverTypeSupported : 1; 
    } _has;
}

@property(readonly) BOOL hasAppMajorVersion;
@property(retain) NSString * appMajorVersion;
@property(readonly) BOOL hasAppMinorVersion;
@property(retain) NSString * appMinorVersion;
@property(readonly) BOOL hasHardwareModel;
@property(retain) NSString * hardwareModel;
@property BOOL hasMaxManeuverTypeSupported;
@property int maxManeuverTypeSupported;


- (void)setHasMaxManeuverTypeSupported:(BOOL)arg1;
- (void)setMaxManeuverTypeSupported:(int)arg1;
- (int)maxManeuverTypeSupported;
- (BOOL)hasMaxManeuverTypeSupported;
- (id)hardwareModel;
- (BOOL)hasHardwareModel;
- (id)appMinorVersion;
- (BOOL)hasAppMinorVersion;
- (id)appMajorVersion;
- (BOOL)hasAppMajorVersion;
- (void)setHardwareModel:(id)arg1;
- (void)setAppMinorVersion:(id)arg1;
- (void)setAppMajorVersion:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end