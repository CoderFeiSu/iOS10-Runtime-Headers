/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/usr/lib/libmecabra.dylib
 */

@class <MecabraDatabaseAccessProtocol>, NSString, NSURL;

@interface MecabraDatabase : NSObject  {
    <MecabraDatabaseAccessProtocol> *_serverObject;
    NSString *_type;
    NSURL *_URL;
}

@property(retain) <MecabraDatabaseAccessProtocol> * serverObject;
@property(retain) NSString * type;
@property(retain) NSURL * URL;


- (void)setServerObject:(id)arg1;
- (unsigned int)addEntryWithReturnedIdentifier:(id)arg1;
- (id)entriesWithValues:(id)arg1;
- (id)synchronousDatabaseWriteWithObject:(id)arg1;
- (id)synchronousDatabaseReadWithPropertyKey:(id)arg1;
- (id)synchronousDatabaseReadWithFilter:(id)arg1;
- (void)databaseDidChange;
- (id)serverObject;
- (id)rootProxyWithDispatchSemaphore:(id)arg1;
- (id)initWithType:(id)arg1 URL:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 entry:(id)arg3;
- (void)deleteEntry:(id)arg1;
- (void)clearStoredMergeEntries;
- (id)allEntries;
- (id)entriesToMerge;
- (void)deleteAllMatchingEntries:(id)arg1;
- (id)removeDuplicatesForEntry:(id)arg1 uniquingKeys:(id)arg2 sortDescriptors:(id)arg3 restrictToNumberOfElements:(unsigned int)arg4 identifierKey:(id)arg5;
- (id)setValuesForEntry:(id)arg1 uniquingKeys:(id)arg2 originalIdentifier:(unsigned int)arg3;
- (void)save;
- (void)addEntry:(id)arg1;
- (void)refresh;
- (void)setType:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)dealloc;
- (id)URL;
- (id)type;
- (void)setURL:(id)arg1;

@end