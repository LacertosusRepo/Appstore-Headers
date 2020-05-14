//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTSearchSearchBarDelegate;

@protocol SPTSearchSearchBarProtocol <NSObject>
@property(copy, nonatomic) NSString *text;
@property(nonatomic) __weak id <SPTSearchSearchBarDelegate> delegate;
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
- (void)setShowsCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
@end

