//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTConcertsEntityRowViewModel;

@protocol SPTConcertsEntitySectionViewModel <NSObject>
@property(readonly, nonatomic) _Bool nestedRows;
@property(readonly, nonatomic) long long rows;
@property(readonly, copy, nonatomic) NSString *titleText;
- (id <SPTConcertsEntityRowViewModel>)viewModelForRow:(long long)arg1;
@end

