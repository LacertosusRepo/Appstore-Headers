//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, UIViewController<SPTHubContentRenderingViewController>;

@protocol SPTHubContentRenderer <NSObject>
@property(readonly, nonatomic) UIViewController<SPTHubContentRenderingViewController> *contentViewController;
@property(nonatomic) __weak id <SPTHubContentRenderingDelegate> delegate;
- (void)clearSelection;
- (void)reRenderComponentAtIndex:(unsigned long long)arg1;
- (void)renderError:(NSError *)arg1;
- (void)renderContent;
@end

