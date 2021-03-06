/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSMutableSet, NSSQLSelectIntermediate, NSMutableDictionary, NSSQLLimitIntermediate, NSSQLEntity, NSSQLOffsetIntermediate, NSMutableArray, NSSQLGroupByIntermediate, NSSQLWhereIntermediate, NSSQLHavingIntermediate, NSSQLOrderIntermediate, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLFetchIntermediate : NSSQLIntermediate {
@private
	NSSQLEntity* _governingEntity;
	NSString* _governingAlias;
	NSString* _correlationToken;
	NSSQLSelectIntermediate* _selectClause;
	NSSQLWhereIntermediate* _whereClause;
	NSSQLGroupByIntermediate* _groupByClause;
	NSSQLHavingIntermediate* _havingClause;
	NSSQLLimitIntermediate* _limitClause;
	NSSQLOffsetIntermediate* _offsetClause;
	NSSQLOrderIntermediate* _orderIntermediate;
	NSMutableArray* _joinIntermediates;
	NSMutableDictionary* _joinKeypaths;
	NSMutableSet* _groupByKeypaths;
	BOOL _isDictionaryCountFetch;
}
-(id)initWithEntity:(id)entity alias:(id)alias inScope:(id)scope;
-(id)initWithScope:(id)scope;
-(id)_generateJoinSQLStringInContext:(id)context;
-(void)addGroupByKeypath:(id)keypath;
-(void)addJoinIntermediate:(id)intermediate atKeypathWithComponents:(id)components;
-(void)dealloc;
-(id)fetchIntermediate;
-(id)fetchIntermediateForKeypathExpression:(id)keypathExpression;
-(id)finalJoinForKeypathWithComponents:(id)components;
-(id)generateSQLStringInContext:(id)context;
-(id)governingAlias;
-(id)governingAliasForKeypathExpression:(id)keypathExpression;
-(id)governingEntity;
-(id)governingEntityForKeypathExpression:(id)keypathExpression;
-(BOOL)groupByClauseContainsKeypath:(id)keypath;
-(id)groupByIntermediate;
-(id)havingIntermediate;
-(BOOL)isDictionaryCountFetch;
-(BOOL)isFunctionScoped;
-(id)joinIntermediates;
-(BOOL)keypathExpressionIsSafeLHSForIn:(id)anIn;
-(id)limitIntermediate;
-(void)promoteToOuterJoinAtKeypathWithComponents:(id)components;
-(void)promoteToOuterJoinsAlongKeypathWithComponents:(id)components;
-(void)selectDistinct;
-(id)selectIntermediate;
-(void)setCorrelationToken:(id)token;
-(void)setDictionaryCountFetch:(BOOL)fetch;
-(void)setGoverningAlias:(id)alias;
-(void)setGoverningEntity:(id)entity;
-(void)setGroupByIntermediate:(id)intermediate;
-(void)setHavingIntermediate:(id)intermediate;
-(void)setLimitIntermediate:(id)intermediate;
-(void)setOffsetIntermediate:(id)intermediate;
-(void)setOrderIntermediate:(id)intermediate;
-(void)setSelectIntermediate:(id)intermediate;
-(void)setWhereIntermediate:(id)intermediate;
@end

