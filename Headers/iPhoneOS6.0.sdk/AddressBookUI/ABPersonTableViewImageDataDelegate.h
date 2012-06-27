/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABPersonImageDataDelegate.h"
#import "AddressBookUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ABPersonTableViewDataSource;

@interface ABPersonTableViewImageDataDelegate : XXUnknownSuperclass <ABPersonImageDataDelegate> {
@private
	CFDictionaryRef _currentImageData;
	void* _personForImageData;
	BOOL _hasImageChanges;
	BOOL _didChangePreferredPersonForImage;
	ABPersonTableViewDataSource* _dataSource;
}
@property(assign, nonatomic) ABPersonTableViewDataSource* dataSource;	// @synthesize=_dataSource
-(CFDictionaryRef)currentImageData;
// declared property getter: -(id)dataSource;
-(void)dealloc;
-(BOOL)didChangePreferredPersonForImage;
-(BOOL)hasImageChanges;
-(BOOL)hasImageDataForPerson:(void*)person;
-(id)imageDataWithFormat:(int)format cropRect:(CGRect*)rect forPerson:(void*)person;
-(id)imageDataWithFormat:(int)format cropRect:(CGRect*)rect forPerson:(void*)person isRemoved:(BOOL*)removed;
-(void)imageWillSave;
-(void)markImagesWith:(id)with forPerson:(void*)person;
-(id)people;
-(void*)personForImageData;
-(void*)personForImageDataExcludingPeople:(id)imageDataExcludingPeople;
-(void)refreshImageData;
-(void)reloadImageData;
-(void)removeImageDataForPerson:(void*)person;
-(void)resetImageData;
-(void)setCurrentImageData:(CFDictionaryRef)data;
// declared property setter: -(void)setDataSource:(id)source;
-(void)setImageData:(id)data withFormat:(int)format cropRect:(CGRect)rect forPerson:(void*)person;
-(void)setPersonForImageData:(void*)imageData;
-(void)updateRecordImages;
-(id)writablePeople;
@end
