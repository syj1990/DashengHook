//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportKFSessionMsgActionItem : WAReportBaseItem
{
    unsigned int _eventTime;
    unsigned long long _eventID;
    NSString *_sceneID;
}

@property(nonatomic) unsigned int eventTime; // @synthesize eventTime=_eventTime;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(nonatomic) unsigned long long eventID; // @synthesize eventID=_eventID;
- (void).cxx_destruct;
- (id)reportString;

@end
