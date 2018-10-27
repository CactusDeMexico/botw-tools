-------- EventFlow: Npc_Road_025 --------

Actor: Npc_Road_025
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['IsRest', 'IsArriveAnchorForRain', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer']
queries: ['CheckTimeType', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_Road_025"), 'Flag': 'Npc_Road_025_CookReward'})

}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event81:
            Npc_Road_025.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_025:Near00'})
          case 1:
            goto Event81
          case 2:
            Event80:
            Npc_Road_025.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_025:Near01'})
          case 3:
            goto Event80
          case 4:
            Event12:
            Npc_Road_025.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_025:Near02'})
          case 5:
            goto Event12
          case 6:
            Event13:
            Npc_Road_025.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_025:Near03'})
          case 7:
            goto Event13
        }
      case 1:
        Event10:
        Npc_Road_025.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Road_025:Near04'})
      case 2:
        goto Event10
      case 3:
        goto Event10
    }
}

void MSG_Rane_00() {

    call Rain()

    if Npc_Road_025.IsOnInstEventFlag() {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:MSG_Rane_00_1'})
        Event69:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    } else {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:MSG_Rane_00'})
        goto Event69
    }
}

void RetMSG_Rane_00() {

    call Rest()

    if Npc_Road_025.IsOnInstEventFlag() {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:RetMSG_Rane_00_1'})
        goto Event69
    } else {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:RetMSG_Rane_00'})
        goto Event69
    }
}

void MSG_Rane_01() {

    call Rest()

    if Npc_Road_025.IsOnInstEventFlag() {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:MSG_Rane_01_1'})
        goto Event69
    } else {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:MSG_Rane_01'})
        goto Event69
    }
}

void RetMSG_Rane_01() {

    call Rest()

    if Npc_Road_025.IsOnInstEventFlag() {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:RetMSG_Rane_01_1'})
        goto Event69
    } else {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:RetMSG_Rane_01'})
        goto Event69
    }
}

void MSG_Rane_02() {

    call Rest()

    if Npc_Road_025.IsOnInstEventFlag() {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:MSG_Rane_02_1'})
        goto Event69
    } else {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:MSG_Rane_02'})
        goto Event69
    }
}

void RetMSG_Rane_02() {

    call Rest()

    if Npc_Road_025.IsOnInstEventFlag() {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:RetMSG_Rane_02_1'})
        goto Event69
    } else {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:RetMSG_Rane_02'})
        goto Event69
    }
}

void MSG_Rane_03() {

    call Rest()

    if Npc_Road_025.IsOnInstEventFlag() {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:MSG_Rane_03_1'})
        goto Event69
    } else {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:MSG_Rane_03'})
        goto Event69
    }
}

void RetMSG_Rane_03() {

    call Rest()

    if Npc_Road_025.IsOnInstEventFlag() {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:RetMSG_Rane_03_1'})
        goto Event69
    } else {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:RetMSG_Rane_03'})
        goto Event69
    }
}

void MSG_Rane_04() {

    call Rest()

    if Npc_Road_025.IsOnInstEventFlag() {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:MSG_Rane_04_1'})
        goto Event69
    } else {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:MSG_Rane_04'})
        goto Event69
    }
}

void RetMSG_Rane_04() {

    call Rain()

    if Npc_Road_025.IsOnInstEventFlag() {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:RetMSG_Rane_04_1'})
        goto Event69
    } else {
        Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:RetMSG_Rane_04'})
        goto Event69
    }
}

void Rest_End() {
    goto Event69
}

void Rest() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Road_025.IsRest() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:Rest_00'})
            Event56:

            call Rest_End()

          case 1:
            Event54:
            Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:Rest_01'})
            goto Event56
          case 2:
            goto Event54
          case 3:
            goto Event54
        }
    } else {
        if Npc_Road_025.IsArriveAnchorForRain() {
            Npc_Road_025.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Road_025:Rest_02'})
            goto Event56
        }
    }
}

void Rain() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckWeather() {
      case 1:
        goto Event54
      case 2:
        goto Event54
      case 3:
        goto Event54
    }
}
