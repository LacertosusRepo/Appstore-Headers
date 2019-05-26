//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTTableRowAdapter.h"

@class NSDate, NSString, SPTNRFContextMenuController, SPTNRFItemCreator, SPTNRFItemLogger;
@protocol GLUEImageLoader, SPTLinkDispatcher;

@interface SPTNRFCreatorRowAdapter : SPTTableRowAdapter
{
    SPTNRFItemCreator *_creator;
    NSString *_eventText;
    NSDate *_timestamp;
    id <GLUEImageLoader> _imageLoader;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTNRFContextMenuController *_contextMenuController;
    SPTNRFItemLogger *_logger;
}

@property(readonly, nonatomic) SPTNRFItemLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTNRFContextMenuController *contextMenuController; // @synthesize contextMenuController=_contextMenuController;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *eventText; // @synthesize eventText=_eventText;
@property(readonly, nonatomic) SPTNRFItemCreator *creator; // @synthesize creator=_creator;
- (void).cxx_destruct;
- (void)contextMenuButtonTapped:(id)arg1;
- (void)didSelectCell;
- (id)tableCell;
- (double)tableCellHeight;
- (double)estimatedTableCellHeight;
- (id)initWithCreator:(id)arg1 eventText:(id)arg2 timestamp:(id)arg3 imageLoader:(id)arg4 linkDispatcher:(id)arg5 contextMenuController:(id)arg6 logger:(id)arg7;

@end

