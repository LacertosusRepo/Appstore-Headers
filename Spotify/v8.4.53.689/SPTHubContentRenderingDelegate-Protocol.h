//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, UIView;

@protocol SPTHubContentRenderingDelegate <NSObject>
- (void)hubContentRenderer:(id <SPTHubContentRenderer>)arg1 didRenderComponent:(UIView *)arg2 atIndexPath:(struct SPTHubIndexPath)arg3;
- (_Bool)hubContentRenderer:(id <SPTHubContentRenderer>)arg1 performActionForFooterInComponentAtIndex:(unsigned long long)arg2;
- (_Bool)hubContentRenderer:(id <SPTHubContentRenderer>)arg1 performActionForItemAtIndexPath:(struct SPTHubIndexPath)arg2;
- (void)hubContentRenderer:(id <SPTHubContentRenderer>)arg1 componentWithView:(UIView *)arg2 willAppearAtIndex:(unsigned long long)arg3;
- (void)hubContentRenderer:(id <SPTHubContentRenderer>)arg1 didUpdateContentOffset:(struct CGPoint)arg2;
- (struct UIEdgeInsets)hubContentRenderer:(id <SPTHubContentRenderer>)arg1 insetsForComponentAtIndex:(unsigned long long)arg2;
- (UIView *)hubContentRenderer:(id <SPTHubContentRenderer>)arg1 accessoryViewForInfoViewForError:(NSError *)arg2;
- (UIView *)hubContentRenderer:(id <SPTHubContentRenderer>)arg1 overlayViewForItemAtIndexPath:(struct SPTHubIndexPath)arg2 viewSize:(struct CGSize)arg3;
- (UIView *)hubContentRenderer:(id <SPTHubContentRenderer>)arg1 accessoryViewForItemAtIndexPath:(struct SPTHubIndexPath)arg2;
- (UIView *)hubContentRenderer:(id <SPTHubContentRenderer>)arg1 metadataPrefixViewForItemAtIndexPath:(struct SPTHubIndexPath)arg2;
- (UIView *)hubContentRenderer:(id <SPTHubContentRenderer>)arg1 prefixViewForItemAtIndexPath:(struct SPTHubIndexPath)arg2;
- (double)hubContentRenderer:(id <SPTHubContentRenderer>)arg1 heightForBottomLoadingIndicatorForComponentAtIndex:(unsigned long long)arg2;
- (UIView *)hubContentRenderer:(id <SPTHubContentRenderer>)arg1 bottomLoadingIndicatorForComponentAtIndex:(unsigned long long)arg2;
- (UIView *)hubContentRenderer:(id <SPTHubContentRenderer>)arg1 headerAccessoryViewForComponentAtIndex:(unsigned long long)arg2;
- (UIView *)tabControlForHubContentRenderer:(id <SPTHubContentRenderer>)arg1;
@end

