//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBCommandHandler-Protocol.h"

@protocol SPTSearchRecentsDataSource;

@interface SPTSearchSaveToRecentsCommandHandler : NSObject <EXP_HUBCommandHandler>
{
    id <SPTSearchRecentsDataSource> _recentsDataSource;
}

@property(readonly, nonatomic) id <SPTSearchRecentsDataSource> recentsDataSource; // @synthesize recentsDataSource=_recentsDataSource;
- (void).cxx_destruct;
- (_Bool)shouldTrackURIInRecents:(id)arg1 componentModel:(id)arg2;
- (void)updateRecentsDataSourceIfNeededForCommandModel:(id)arg1 componentModel:(id)arg2;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithRecentsDataSource:(id)arg1;

@end

