//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTVocalRemovalMenuButtonViewModelDelegate;

@interface SPTVocalRemovalMenuButtonViewModel : NSObject
{
    id <SPTVocalRemovalMenuButtonViewModelDelegate> _delegate;
}

@property(nonatomic) __weak id <SPTVocalRemovalMenuButtonViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedFeedbackString;
@property(readonly, nonatomic) NSString *localizedVolumeDownString;
@property(readonly, nonatomic) NSString *localizedVolumeUpString;

@end

