/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSPropertyDescription.h"
#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"

@class NSMutableDictionary, NSEntityDescription, NSData, NSArray, NSString;

@interface NSPropertyDescription : XXUnknownSuperclass <NSCoding, NSCopying> {
@private
	NSString* _versionHashModifier;
	id _underlyingProperty;
	NSData* _versionHash;
	NSEntityDescription* _entity;
	NSString* _name;
	NSArray* _validationPredicates;
	NSArray* _validationWarnings;
	propertyDescriptionFlags _propertyDescriptionFlags;
	void* _extraIvars;
	NSMutableDictionary* _userInfo;
	long _entitysReferenceIDForProperty;
}
+(void)initialize;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(id)entity;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(BOOL)isIndexed;
-(BOOL)isOptional;
-(BOOL)isTransient;
-(id)name;
-(id)renamingIdentifier;
-(void)setIndexed:(BOOL)indexed;
-(void)setName:(id)name;
-(void)setOptional:(BOOL)optional;
-(void)setRenamingIdentifier:(id)identifier;
-(void)setTransient:(BOOL)transient;
-(void)setUserInfo:(id)info;
-(void)setValidationPredicates:(id)predicates withValidationWarnings:(id)validationWarnings;
-(void)setVersionHashModifier:(id)modifier;
-(id)userInfo;
-(id)validationPredicates;
-(id)validationWarnings;
-(id)versionHash;
-(id)versionHashModifier;
@end

@interface NSPropertyDescription (_NSPropertyDescriptionPrivateMethods)
-(id)elementID;
-(BOOL)isIndexedBySpotlight;
-(BOOL)isSpotlightIndexed;
-(BOOL)isStoredInExternalRecord;
-(BOOL)isStoredInTruth;
-(BOOL)isStoredInTruthFile;
-(void)setElementID:(id)anId;
-(void)setIndexedBySpotlight:(BOOL)spotlight;
-(void)setSpotlightIndexed:(BOOL)indexed;
-(void)setStoredInExternalRecord:(BOOL)externalRecord;
-(void)setStoredInTruth:(BOOL)truth;
-(void)setStoredInTruthFile:(BOOL)truthFile;
@end

@interface NSPropertyDescription (_NSInternalMethods)
-(void)_appendPropertyFieldsToData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(const id)slots;
-(BOOL)_comparePredicatesAndWarnings:(id)warnings;
-(void)_createCachesAndOptimizeState;
-(long)_entitysReferenceID;
-(NSExtraPropertyIVars*)_extraIVars;
-(id)_initWithName:(id)name;
-(void)_initializeExtraIVars;
-(BOOL)_isEditable;
-(BOOL)_isOrdered;
-(BOOL)_isRelationship;
-(BOOL)_isToManyRelationship;
-(BOOL)_nonPredicateValidateValue:(id*)value forKey:(id)key inObject:(id)object error:(id*)error;
-(unsigned)_propertyType;
-(id)_rawValidationPredicates;
-(id)_rawValidationWarnings;
-(void)_replaceValidationPredicates:(id)predicates andWarnings:(id)warnings;
-(void)_restoreValidation;
-(void)_setEntity:(id)entity;
-(void)_setEntitysReferenceID:(long)anId;
-(void)_setOrdered:(BOOL)ordered;
-(BOOL)_skipValidation;
-(void)_stripForMigration;
-(void)_throwIfNotEditable;
-(void)_versionHash:(char*)hash;
-(void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(const id)slots fetchRequests:(id)requests;
-(BOOL)isReadOnly;
-(void)setReadOnly:(BOOL)only;
@end
