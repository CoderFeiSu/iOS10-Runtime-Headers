/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObject;

@interface _NSFaultingMutableOrderedSet : NSMutableOrderedSet  {
    int _cd_rc;
    struct _NSFaultingMutableOrderedSetFlags { 
        unsigned int _isFault : 1; 
        unsigned int _mustPropagateDelete : 1; 
        unsigned int _ignoringIdempotentKVO : 1; 
        unsigned int _mustCopyOnWrite : 1; 
        unsigned int _isImmutableCopy : 1; 
        unsigned int _reserved : 11; 
        unsigned int _relationship : 16; 
    } _flags;
    id _realSet;
    NSManagedObject *_source;
    unsigned int *_orderKeys;
    id _grottyHack;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;

- (void)_setProcessingIdempotentKVO:(BOOL)arg1;
- (void)unionOrderedSet:(id)arg1;
- (void)minusOrderedSet:(id)arg1;
- (void)willChange;
- (void)_assignOrderKeysUsingCount:(unsigned int)arg1;
- (void)_updateOrderKeysFromOrderOfObjectIDs:(id)arg1;
- (id)_newOrderKeys;
- (unsigned int)_orderKeyForObject:(id)arg1;
- (void)_populateOrderKeysUsingSnapshot:(id)arg1 orderKeys:(id)arg2 newIndexes:(unsigned int**)arg3 reorderedIndexes:(char **)arg4;
- (void)_batchFulfillOrderKeysForObjectsIntoIndexes:(unsigned int**)arg1;
- (BOOL)_hasOrderKeys;
- (BOOL)_isIdenticalFault:(id)arg1;
- (BOOL)_shouldProcessKVOChange;
- (id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4;
- (id)relationship;
- (id)source;
- (void)turnIntoFault;
- (BOOL)isFault;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)willRead;
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(BOOL)arg3;
- (BOOL)isEqualToOrderedSet:(id)arg1;
- (void)addObjects:(const id*)arg1 count:(unsigned int)arg2;
- (void)sortWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (void)sortRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 usingComparator:(id)arg3;
- (void)removeObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)insertObjects:(const id*)arg1 count:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (id)initWithOrderedSet:(id)arg1;
- (id)objectEnumerator;
- (unsigned int)indexOfObject:(id)arg1;
- (id)allObjects;
- (unsigned int)indexOfObjectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (unsigned int)indexOfObjectWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)indexesOfObjectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)getObjects:(id*)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addObject:(id)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)sortUsingComparator:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)unionSet:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (Class)classForArchiver;
- (id)replacementObjectForCoder:(id)arg1;
- (Class)classForCoder;

@end