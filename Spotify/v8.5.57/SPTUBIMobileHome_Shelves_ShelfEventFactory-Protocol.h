//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileHome_Shelves_Shelf_CarouselEventFactory, SPTUBIMobileHome_Shelves_Shelf_HeaderEventFactory;

@protocol SPTUBIMobileHome_Shelves_ShelfEventFactory <NSObject>
- (id <SPTUBIMobileHome_Shelves_Shelf_CarouselEventFactory>)carouselFactoryWithPosition:(long long)arg1;
- (id <SPTUBIMobileHome_Shelves_Shelf_HeaderEventFactory>)headerFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
