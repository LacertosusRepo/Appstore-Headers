//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPIScreenConfig.h"

@protocol RAPIMoreInfoScreenDelegate;

@interface RAPIMoreInfoScreenConfig : RAPIScreenConfig
{
    id <RAPIMoreInfoScreenDelegate> _delegate;
}

@property(retain) id <RAPIMoreInfoScreenDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)init;

@end
