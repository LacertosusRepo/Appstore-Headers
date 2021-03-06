//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, SPTHomeMixUserToggleViewModel;

@interface SPTHomeMixUserToggleMembersHelper : NSObject
{
    NSArray *_members;
    NSMutableArray *_usersPresent;
    SPTHomeMixUserToggleViewModel *_model;
}

+ (id)membersExceptOptedOut:(id)arg1;
@property(retain, nonatomic) SPTHomeMixUserToggleViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSMutableArray *usersPresent; // @synthesize usersPresent=_usersPresent;
@property(copy, nonatomic) NSArray *members; // @synthesize members=_members;
- (void).cxx_destruct;
- (id)memberBlacklist;
- (unsigned long long)selectedUsersCount;
- (void)flipMemberAtIndex:(unsigned long long)arg1;
- (long long)memberStateAtIndex:(unsigned long long)arg1;
- (id)userPresentArrayFromMembers:(id)arg1;
- (id)initWithModel:(id)arg1;

@end

