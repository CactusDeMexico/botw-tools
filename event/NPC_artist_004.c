-------- EventFlow: NPC_artist_004 --------

Actor: NPC_artist_004
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call NPC_artist_000.Talk_Artist({'Self': ActorIdentifier(name="NPC_artist_004")})

}

void FairyFountain_Finish_Talk() {

    call NPC_artist_000.Talk_Artist_FairyFountain_Finish({'Self': ActorIdentifier(name="NPC_artist_004"), 'PhotoNo': 4})

}
