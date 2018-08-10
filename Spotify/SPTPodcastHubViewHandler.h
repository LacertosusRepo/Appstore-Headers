//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHubViewHandler.h"

@class NSString, SPTPodcastHubLocalContentProvider, SPTTheme;

@interface SPTPodcastHubViewHandler : NSObject <SPTHubViewHandler>
{
    id <SPTHubViewHandlerDelegate> _delegate;
    SPTPodcastHubLocalContentProvider *_contentProvider;
    SPTTheme *_theme;
}

@property(readonly, nonatomic) __weak SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) __weak SPTPodcastHubLocalContentProvider *contentProvider; // @synthesize contentProvider=_contentProvider;
@property(nonatomic) __weak id <SPTHubViewHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)handleHubBlockHeaderAccessoryButtonPress:(id)arg1 withTargetURL:(id)arg2 viewController:(id)arg3;
- (_Bool)handleSelectionForHubItem:(id)arg1 atIndexPath:(struct SPTHubIndexPath)arg2 viewController:(id)arg3;
- (_Bool)handleHubHeaderButtonPressWithTargetURL:(id)arg1 viewController:(id)arg2;
- (struct UIEdgeInsets)insetsForHubBlockAtIndex:(unsigned long long)arg1;
- (id)overlayViewForHubItem:(id)arg1 atIndexPath:(struct SPTHubIndexPath)arg2 itemViewSize:(struct CGSize)arg3;
- (id)metaDataPrefixViewForHubItemAtIndexPath:(struct SPTHubIndexPath)arg1 viewURI:(id)arg2;
- (id)prefixViewForHubItemAtIndexPath:(struct SPTHubIndexPath)arg1;
- (id)infoViewForEmptyHubWithViewURI:(id)arg1 viewController:(id)arg2;
- (void)handleHubDidFinishLoadingContentForViewURI:(id)arg1;
- (id)rightNavigationBarButtonItemForHubWithViewURI:(id)arg1;
- (id)initWithContentProvider:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

